#include <stdio.h>
#include <stdlib.h>

#define MOD 998244353

long long pow_2_arr[100005];
void pre_pow_of_2() {
    pow_2_arr[0] = 1;
    for (int i = 1; i < 100005; i++) {
        pow_2_arr[i] = (pow_2_arr[i - 1] * 2) % MOD;
    }
}

void solve() {
    int n;
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));
    int *q = (int *)malloc(n * sizeof(int));
    long long *P = (long long *)malloc(n * sizeof(long long));
    long long *Q = (long long *)malloc(n * sizeof(long long));

    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        P[i] = pow_2_arr[p[i]];
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &q[i]);
        Q[i] = pow_2_arr[q[i]];
    }

    long long *maxP = (long long *)malloc(n * sizeof(long long));
    long long *maxQ = (long long *)malloc(n * sizeof(long long));

    maxP[0] = P[0];
    maxQ[0] = Q[0];
    for (int i = 1; i < n; i++) {
        maxP[i] = (P[i] > maxP[i - 1]) ? P[i] : maxP[i - 1];
        maxQ[i] = (Q[i] > maxQ[i - 1]) ? Q[i] : maxQ[i - 1];
    }

    for (int i = 0; i < n; i++) {
        long long max_val = 0;
        for (int j = 0; j <= i; j++) {
            long long candidate = (P[j] + Q[i - j]) % MOD;
            if (candidate > max_val) max_val = candidate;
        }
        printf("%lld ", max_val);
    }
    printf("\n");

    free(p);
    free(q);
    free(P);
    free(Q);
    free(maxP);
    free(maxQ);

    return;
}

int main() {
    int t;
    scanf("%d", &t);
    pre_pow_of_2();

    while (t--) {
        solve();
    }

    return 0;
}
