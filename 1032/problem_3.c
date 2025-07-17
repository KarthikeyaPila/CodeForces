#include <stdio.h>

long long fun_sum(int n){
    long long output = 0;

    for (int len = 1; len <= n; len++){

        long long num_sub = n-len+1;
        long long f_val = (len+1)/2;

        output += num_sub*f_val;
    }

    return output;
}

void solve(){
    int n;
    char s[200010];

    scanf("%d", &n);
    scanf("%s", s);

    long long output = fun_sum(n);
    printf("output: %lld\n", output);

    return;
}

int main(){
    int t;
    scanf("%d", &t);

    while (t--){
        solve();
    }

    return 0;
}
