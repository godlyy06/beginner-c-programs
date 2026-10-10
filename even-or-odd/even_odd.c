// Author: Alen Junuzi
// Date: 09.10.2026
// Filename: Even and Odd

#include <stdio.h>

/* Function checks user-input (whole number) if it's even or odd.
It does that with the modulo operator and checks if the rest of the division
is exactly 0, then it is even, or if there's a remainder of the number. */

int main() {

    int input_var1;

    printf("Enter a positive whole number: ");
    scanf("%d", &input_var1);


    if (input_var1 % 2 == 0) {
        printf("Your number is even!\n");
    }    
    else if (input_var1 % 2 > 0 || input_var1 % 2 < 0) {
        printf("Your number is odd!\n");
    }
    else {
        printf("Something went wrong! Please try again!\n");
    }


    return 0;
}
