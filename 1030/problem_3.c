#include <stdio.h>
#include <stdlib.h>

int compare_fxn(const void* a, const void* b){
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    return (x > y) - (x < y);
};

int bin_one_count(long long x){
    int count = 0;
    while(x){
        count += (x & 1);
        x >>= 1;
    }
    return count;
}

void solve(){
    int n;
    long long k;
    scanf("%d %lld", &n, &k);

    long long a[5000];
    long long beauty = 0;

    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        beauty += bin_one_count(a[i]);
    }

    long long gains[5000 * 60];
    int gain_count = 0;

    for(int i = 0; i < n; i++){
        long long x = a[i];
        int current_beauty = bin_one_count(x);

        for(int b = 0; b < 60; b++){
            if(((x >> b) & 1) == 0){
                long long want = 1LL << b;
                long long delta = want - (x % want);
                long long new_val = x + delta;
                int new_beauty = bin_one_count(new_val);

                if(new_beauty > current_beauty){
                    gains[gain_count++] = delta;
                    break;
                }
            }
        }
    }

    qsort(gains, gain_count, sizeof(long long), compare_fxn);

    for(int i = 0; i < gain_count && k > 0; i++){
        if(gains[i] <= k){
            k -= gains[i];
            beauty++;
        }
    }

    printf("output: %lld\n", beauty);

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
