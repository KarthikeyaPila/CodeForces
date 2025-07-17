#include <stdio.h>

void solve(){
    int n;
    scanf("%d", &n);

    printf("%d\n", (n+1)/2);

    for(int i=1; i<=n; i+=2){
        printf("%d %d %d\n", i, 1, n);
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
