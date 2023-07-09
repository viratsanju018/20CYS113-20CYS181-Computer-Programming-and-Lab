#include <stdio.h>

int main(){
    int rows, i, j;

    scanf("%d", &rows);

    if(rows <= 0 || rows >= 25){
        printf("Invalid Input\n");
        return 0;
    }

    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}