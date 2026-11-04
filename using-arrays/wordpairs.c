// Author: Alen Junuzi
// Date: 31.10.2026
// Filename: wordpairs.c

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int main() {
    
    char words[101];

    printf("Enter a word: ");
    fgets(words, sizeof(words), stdin);
    words[strcspn(words, "\n")] = '\0';

    int length = strlen(words);
    int pairs = 0;

    if(length < 2) {
        printf("Please enter at least 2 characters!\n");
        return 1;
    }

    for(int i=0;i < length - 1; i++){
        if(tolower(words[i]) == tolower(words[i+1])){
            pairs++;
        }
    }

    printf("User Input: %s\nNumber of Pairs: %d", words, pairs);


    return 0;
}