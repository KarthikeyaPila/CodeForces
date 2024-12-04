#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[5][5];
    int rows, cols;
    int count=0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j]==1){
                rows = i;
                cols = j;
            }
        }
    }

    count = abs(rows-2) + abs(cols-2);

    printf("%d", count);
    return 0;

}