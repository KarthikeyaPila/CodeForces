#include <stdio.h>
#include <stdlib.h>

void solve(){
    int n, s;
    scanf("%d%d", &n, &s);
    
    int x[11];

    for(int i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    
    int x1 = x[0];
    int xn = x[n-1];
    
    int left = abs(s-x1) + (xn-x1);
    int right = abs(s-xn) + (xn-x1);
    
    if(left < right){
        printf("%d\n", left);
    } else{
        printf("%d\n", right);
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