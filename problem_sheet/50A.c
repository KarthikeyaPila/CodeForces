#include <stdio.h>

int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int no_of_pieces;
    int board = M*N;

    no_of_pieces = board/2;

    printf("%d", no_of_pieces);
    
    return 0;
}