// Autor: Alen Junuzi
// Date: 09.10.2026
// Filename: rock_paper_scissors.c

#include <stdio.h>

/* 
Function reads two user inputs (character-inputs) that simulates a Rock, Paper, Scissors game.
The If and else if-Statements check which of the two users or players is the winner. The Statements use logic-gate operators such as "||" for "OR" and "&&" for "AND" to make the program more efficient. A draw is also included, but no error handlings included yet.
*/

int main() {


    char user_input1, user_input2;
    printf("First player should enter 'r' for rock, 'p' for paper or 's' for scissors: ");
    scanf(" %c", &user_input1);
    printf("Second player should enter 'r' for rock, 'p' for paper or 's' for scissors: ");
    scanf(" %c", &user_input2);

    

    if (user_input1 == 'r' && user_input2 == 's' || user_input1 == 'p' && user_input2 == 'r' || user_input1 == 's' && user_input2 == 'p') {
        printf("Player 1 wins!\n");
    }
    else if (user_input2 == 'r' && user_input1 == 's' || user_input2 == 'p' && user_input1 == 'r' || user_input2 == 's' && user_input1 == 'p') {
        printf("Player 2 wins!\n");
    }
    else {
        printf("It's a tie!\n");
    }


    return 0;
}