#include <stdio.h>

int main(){
    int a,b,c;
    int sol_count=0;
    int no_problems;
    scanf("%d", &no_problems);
    for(int i=0; i<no_problems; i++){
        scanf("%d %d %d", &a, &b, &c);
        if((a+b+c) >= 2){
            sol_count++;
        }
    }
    printf("%d\n", sol_count);

    return 0;
}