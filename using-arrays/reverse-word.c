// Author: Alen Junuzi
// Date: 26.10.2026
// Filename: rev-word.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char MAX = 21;

int main(){

    char word[MAX];

    printf("Enter a word (MAX 20 CHARACTERS): ");
    fgets(word, sizeof(word), stdin);
    printf("Your Word: %s\n", word);

    int length = strlen(word);

    printf("Your word reversed: ");
    for(int i=0;i<length;i++){
        printf("%c", word[length - 1 - i]);
    }

    return 0;
}