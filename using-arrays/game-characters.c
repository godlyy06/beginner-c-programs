// Author: Alen Junuzi 
// Date: 26.10.2026
// Filename: gamechar.c

#include <stdio.h>
#include <stdlib.h>

int main(){

    int game_characters[3][2] = {
        {2,1},
        {0,2},
        {3,5}
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Row[%d], Column[%d] == %d\n", i+1,j+1,game_characters[i][j]);
        }
    }



    return 0;
}