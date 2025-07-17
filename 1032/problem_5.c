#include <stdio.h>

#define MAXN 200005

long long max(long long a, long long b){
    return a>b ? a:b;
}

void solve(){
    int n;
    long long s, x;
    scanf("%d%lld%lld", &n, &s, &x);

    long long a[MAXN];
    for (int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }

    long long count = 0;

    for (int l=0; l<n; l++){
        long long sum=0;
        long long max_val = a[l];

        for (int r=l; r<n; r++){
            sum += a[r];
            if (a[r] > max_val){
                max_val = a[r];
            }
            if (sum == s && max_val == x){
                count++;
            }
        }
    }

    printf("%lld\n", count);

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