#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void solve(){
    int n;
    scanf("%d", &n);

    long long a[n];
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }

    if(n==1){
        if(a[0] == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        return;
    }

    long long numerator_y = (long long)n*a[0]-a[n-1];
    long long denominator = (long long)n*n-1;

    if (numerator_y%denominator != 0) {
        printf("NO\n");
        return;
    }

    long long y = numerator_y/denominator;
    long long x = a[0] - y*n;

    if (x < 0 || y < 0) {
        printf("NO\n");
        return;
    }
    
    long long expected_val;
    for (int i=0; i<n; i++) {
        expected_val = x*(i+1)+y*(n-(i+1)+1);
        if (a[i] != expected_val) {
            printf("NO\n");
            return;
        }
    }

    printf("YES\n");

    return;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}