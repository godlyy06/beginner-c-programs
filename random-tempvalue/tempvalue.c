// Author: Alen Junuzi
// Date: 22.10.2026
// Filename: tempvalue.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    float random_temp;
    int days[7] = {1,2,3,4,5,6,7};
    float temperatures[7];      //empty array for the for-loop 
    float sum = 0.0;

    srand((float) time(NULL));  //starts the random generator

    printf("----------------WEEKDAYS----------------\n");
    printf("1 = Monday | 2 = Tuesday | 3 = Wednesday | 4 = Thursday\n 5= Friday | 6 = Saturday | 7 = Sunday\n");
    printf("----------------------------------------------\n");


    for(int i=0;i<7;i++){
        random_temp = rand() % 53 - 10.5; //random temperatures between -10 and 42.5°C
        temperatures[i] = random_temp; //empty array gets random temperature every iteration
        printf("For Day Nr.%d we have %.1f°C\n", days[i], random_temp);
        sum = sum + temperatures[i]; //adds every temperature value into one for the "average" calculation lateron
    }

    float average = sum / 7.0; // every random generated temperature gets divided by 7 (we have 7 weekdays)
    printf("\nAverage Temperatures: %1.f°C", average);


    return 0; 
}