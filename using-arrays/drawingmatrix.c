// Author: Alen Junuzi
// Date: 05.11.26
// Filename: drawingmatrix.c

#include <stdio.h>

int main() {

    int a;
    int b;

    do {
    printf("Enter a (a>0): ");
    scanf("%d", &b);

    printf("Enter b (b>0): ");
    scanf("%d", &a);

    if(a < 0 || b < 0){
        printf("Try again!");
    }

    } while (a < 0 || b < 0);

    for (int row = 0; row < a; row++) {

    
    for (int square = 0; square < 3; square++) {

        for (int col = 0; col < a; col++) {
            if (row == 0 || row == a - 1 ||
                col == 0 || col == a - 1) {
                printf("O");
            } else {
                printf(" ");
            }
        }

        
        for (int space = 0; space < b; space++) {
            printf(" ");
        }
    }

    printf("\n");
}

    printf("\n");

   for (int row = 0; row < b; row++) {

    for (int triangle = 0; triangle < 3; triangle++) {
        int size = b - triangle;

        
        for (int space = 0; space < a; space++) {
            printf(" ");
        }

       
        for (int col = 0; col < size; col++) {
            if (col < row || row >= size) {
                printf(" ");
            } else {
                printf("X");
            }
        }
    }

    printf("\n");
}

    return 0;
}