//2D array 
/*Name:Mogoi Ignatius
Reg no.:PA106/G/28834/25
Description:2d array c program
*/
#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };
    
    printf("Array elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }
    
    printf("\nMatrix format:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", scores[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}