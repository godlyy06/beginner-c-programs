// Author: Alen Junuzi
// Date: 12.11.26
// Filename: dec-bin.c

#include <stdio.h>
#include <stdbool.h>

bool check_input(int decimal);
void decimal_to_binary(int decimal);

int main(void){

    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);

    check_input(x);
    decimal_to_binary(x);

    return 0;
}

void decimal_to_binary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        int rest = decimal % 2;
        binary [i] = rest;

        decimal = decimal / 2;
        i++;
    }

    for (int j= i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
   
}

bool check_input(int decimal) {
    if(decimal<0){
        printf("Enter a positive Decimal Number!");
    } 
    return decimal;
}
