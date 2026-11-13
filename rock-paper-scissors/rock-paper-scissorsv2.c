// Author: Alen Junuzi
// Date: 13.11.26
// Filename: rockpaperscissors.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum rps {
    ROCK,       // Value: 0
    PAPER,      // Value: 1
    SCISSORS    // Value: 2
};

char username[101]; // Stores name outside the functions so multiple functions have access to it

void user_name(void); // Function reads user name
enum rps user_input(void); // Function reads input from user
enum rps computer_input(void); // Function stores random choice
void compare(enum rps user_choice, enum rps computer_choice); // Function compares user & computer and prints who wins = evaluation

int main(void) {
    srand(time(NULL));

    user_name(); // Output: Player name
    printf("Username: %s\n", username);

    enum rps computer_choice = computer_input(); // Computer generates number
    enum rps user_choice = user_input(); // User enters number

    // Print user & computer input as ROCK, PAPER, SCISSORS

    if (user_choice == ROCK) {
        printf("\nUsers choice: Rock!\n");
    } else if (user_choice == PAPER) {
        printf("\nUsers choice: Paper!\n");
    } else if (user_choice == SCISSORS) {
        printf("\nUsers choice: Scissors!\n");
    }

    if (computer_choice == ROCK) {
        printf("Computers choice: Rock!\n");
    } else if (computer_choice == PAPER) {
        printf("Computers choice: Paper!\n");
    } else if (computer_choice == SCISSORS) {
        printf("Computers choice: Scissors!\n");
    }

    compare(user_choice, computer_choice);

    return 0;
}

void user_name(void) {
    printf("Enter your username: ");
    fgets(username, sizeof(username), stdin);
}

enum rps user_input(void) {
    int input;

    printf("Choose: 0 - ROCK | 1 - PAPER | 2 - SCISSORS\n--> ");

    while (scanf("%d", &input) != 1 || input < 0 || input > 2) { // Remove invalid input - code by GPT 6.1 Sol
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
            // Remove invalid input
        }

        if (c == EOF) {
            exit(EXIT_FAILURE);
        }

        printf("Please enter 0, 1 or 2: ");
    }

    return (enum rps) input;
}

enum rps computer_input(void) {
    enum rps computer_choice = rand() % 3;
    return computer_choice;
}

void compare(enum rps user_choice, enum rps computer_choice) {
    if (user_choice == computer_choice) {
        printf("\nTie!\n");
    } else if ((user_choice == ROCK && computer_choice == SCISSORS) ||
               (user_choice == SCISSORS && computer_choice == PAPER) ||
               (user_choice == PAPER && computer_choice == ROCK)) {
        printf("\nUser Wins!\n");
    } else {
        printf("\nComputer Wins!\n");
    }
}