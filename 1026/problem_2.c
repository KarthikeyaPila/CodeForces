#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

void solve(){
    char str[1000000];

    scanf("%s", str);
    int count=0; 

    if(strlen(str) <= 2){
        printf("NO\n");
        return;
    }

    int left=0, right=0; 
    int n=0; 
    for(size_t i=1; i < strlen(str); i++){
        if(str[i] == ')' && str[i-1] == '('){
            count++;
        }
        if(str[i-1] == '('){
            left++;
        } else {
            right++;
        }
    }

    if(count >= 2){
        printf("YES\n");
    } else{
        printf("NO\n");
    }

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