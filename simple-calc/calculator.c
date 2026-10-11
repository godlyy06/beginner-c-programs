// Author: Alen Junuzi
// Date: 11.10.2026
// Filename: calculator.c

#include <stdio.h>


/*
Function should imitate a simple Calculator.
It contains four simple arithmetic operations such as '+', '-', '*' and '/'.
User should first choose the operator and then the user can put their two numbers in.
*/


int main() {

    int user_operator, first_var, second_var;

    /*
    Error-Handling is available, if the first input is false.
	If the User puts correct values, the user will also get notified about that.
    */

    printf("Choose an operator for your calculation!\n");
    printf("'1' to Add; '2' to Subtract; '3' to Multiply; '4' to Divide: " );
    scanf("%d", &user_operator);
        if (user_operator == 1 || user_operator == 2 || user_operator == 3 || user_operator == 4) {
        printf("You have chosen a valid operator.\n");
         } else {
        printf("You have chosen an invalid operator. Please choose '1', '2', '3' or '4'.\n");
        }

    printf("Your first Number: ");
    scanf("%d", &first_var);
    printf("Your second Number: ");
    scanf("%d", &second_var);

    /*
    Switch-Case statement checks user inputs and calculates the two
	numbers with the chosen operator.
    Also checks if the "/" is used by dividing a number by 0 which
	prints out an error message.
    */

   switch (user_operator)
    {
        case 1:
            printf("The result of your calculation is: %d", first_var + second_var);
            break;
        case 2:
            printf("The result of your calculation is: %d", first_var - second_var);
            break;
        case 3:
            printf("The result of your calculation is: %d", first_var * second_var);
            break;
        case 4:
            if (second_var == 0) {
                printf("Error: Division by zero is not allowed.");
            } else {
                printf("The result of your calculation is: %d", first_var / second_var);
            }
            break;
        default:
            printf("Wrong input. Please type '1','2','3' or '4'");
            break;
    } 

    
    return 0;
}