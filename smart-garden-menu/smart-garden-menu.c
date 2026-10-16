// Author: Alen Junuzi
// Date: 15.10.2026
// Filename: smart-garden.c

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int main() {
    // Stores the selected device and its requested state
    char device_menu;
    int device_state;
    int rand_temp;

    // Both devices start turned off
    bool r_device_state = false, w_device_state = false;

    // Seeds the random number generator with the current time
    srand((unsigned int) time(NULL));

    // Selects a temperature between -20 and 45 degrees once at startup
    rand_temp = rand() % 66 - 20;

    // Repeats the menu until the user enters e
    while (true) {
        printf("\n---------------- SMART GARDEN ----------------\n");
        printf("Temperature: %d C\n", rand_temp);

        // Turns off watering when the temperature is below 10 degrees
        if (rand_temp < 10 && w_device_state) {
            w_device_state = false;
            printf("\nTemperature is below 10 C. Watering has been turned off.\n");
        }

        // Displays the current state of both devices
        printf("\n");
        printf("Current State: Robot %d (0 = OFF, 1 = ON) | Watering %d (0 = OFF, 1 = ON)\n",
               r_device_state, w_device_state);
        printf("'r' = Robot | 'w' = Watering | 'e' = Exit\n");
        printf("\n");
        printf("Enter your command: ");

        if (scanf(" %c", &device_menu) != 1) {
            printf("\nInput Ended. Exiting Smart Garden.\n");
            break;
        }

        // Exits the main loop when the user enters e
        if (device_menu == 'e') {
            printf("Turning off Smart Garden...\n");
            sleep(10);
            break;
        }

        // Accepts only r or w as device selections
        if (device_menu != 'r' && device_menu != 'w') {
            printf("Invalid command. Please enter r, w, or e.\n");
            continue;
        }

        // Asks for the requested state of the selected device
        printf("Enter new state for %s (0 = OFF, 1 = ON): ",
               device_menu == 'r' ? "Robot" : "Watering");
        if (scanf("%d", &device_state) != 1) {
            int input_char;
            // Discards invalid characters through the end of the input line
            while ((input_char = getchar()) != '\n' && input_char != EOF) {
            }
            printf("Invalid state. Please enter 0 or 1.\n");
            continue;
        }

        // Allows only 0 (off) or 1 (on)
        if (device_state != 0 && device_state != 1) {
            printf("Invalid state. Please enter 0 or 1.\n");
            continue;
        }

        // Prevents the robot and watering system from running simultaneously
        if (device_menu == 'r') {
            if (device_state == 1 && w_device_state) {
                printf("The robot cannot run while watering is on. Turn watering off first.\n");
            } else {
                r_device_state = device_state == 1;
            }
        } else {
            // Watering cannot start in cold temperatures or while the robot is running
            if (device_state == 1 && rand_temp < 10) {
                printf("Watering cannot be turned on below 10 C.\n");
            } else if (device_state == 1 && r_device_state) {
                printf("Watering cannot be turned on while the robot is running.\n");
            } else {
                w_device_state = device_state == 1;
            }
        }
    }


    return 0;
}