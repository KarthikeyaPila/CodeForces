#include <stdio.h> 
#include <string.h>
#include <limits.h>

// --------------------Karthikeya Pila -----------------------------------------
void solve(){
    char x[1001]; 
    scanf("%s", x);

    size_t len = strlen(x);

    int min = INT_MAX;

    for(int i=0; i<len; i++){
        int out = (int)(x[i]-48);

        if(out < min){
            min = out;
        }
    }

    printf("%d\n", min);

    return;
}

int main(){
    int t; 
    scanf("%d", &t);

    while(t--){
        solve();
    }

    return 0;
}