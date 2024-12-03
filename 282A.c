#include <stdio.h>
#include <string.h>

int main(){
    char read[4];
    int n,x=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s", read);
        
        if(strchr(read, "+") != NULL){
            x++;
        } else {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}