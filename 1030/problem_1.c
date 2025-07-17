#include <stdio.h> 

void solve(){
    int n, k; 
    scanf("%d %d", &n, &k);

    int str[n];

    for(int i = 0; i < k; i++){
        str[i] = 1;
    }

    for(int i = k; i < n; i++){
        str[i] = 0;
    }

    for(int i=0; i<n; i++){
        printf("%d", str[i]);
    }

    printf("\n");

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