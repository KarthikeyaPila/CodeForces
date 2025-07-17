#include <stdio.h>

long long gcd(long long a, long long b){
    while(b){
        long long t = b;
        b = a%b;
        a = t;
    }

    return a;
}

void solve(){
    int n;
    scanf("%d", &n);

    int b[n];
    for(int i=0; i<n; i++){
        scanf("%d", &b[i]);
    }

    long long g = b[0];
    for(int i=1; i<n; i++){
        g = gcd(g, b[i]);
    }

    long long x=1;

    for(int i=0; i<n; i++){
        if(b[i] != g){
            x = b[i]/g;
            break;
        }
    }

    printf("out: %lld\n", x);

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
