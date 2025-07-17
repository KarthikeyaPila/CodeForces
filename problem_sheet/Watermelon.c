#include <stdio.h>

int main(){
    int w;
    scanf("%d", &w);

    if(w%2 != 0){
        printf("NO");
    } else {
        if(w >= 4){
            printf("YES");
        } else {
            printf("NO");
        }
    }

    return 0;
}