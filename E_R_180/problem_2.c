// this is getting annoyinggg

#include <stdio.h> 
#include <stdlib.h>

void solve(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n-1; i++){
        if(abs(a[i] - a[i + 1]) <= 1){
            printf("0\n");
            return;
        }
    }

    if(n == 2){
        printf("-1\n");
        return;
    }

    for(int i=0; i<n-1; i++){
        int x = a[i];
        int y = a[i+1];

        if(i>0){
            int left = a[i - 1];
            if(abs(left - x) <= 1 || abs(left - y) <= 1){
                printf("1\n");
                return;
            }
        }

        if(i+2<n){
            int right = a[i+2];
            if(abs(right - x) <= 1 || abs(right - y) <= 1){
                printf("1\n");
                return;
            }
        }
    }

    printf("-1\n");
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
