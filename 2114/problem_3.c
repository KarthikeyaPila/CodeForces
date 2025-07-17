#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        long long k;
        scanf("%d %lld", &n, &k);

        long long a[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        long long x[n];
        int p[n];
        bool possible = true;

        for (int i = 0; i < n; i++) {
            int power = 0;
            long long val = a[i];
            while ((val % 2) == 0) {
                val /= 2;
                power++;
            }
            x[i] = val;
            p[i] = power;
        }

        for (int i = 1; i < n; i++) {
            if (x[i] == x[i - 1]) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            printf("NO\n");
            return 0;
        }

        long long sum_p = 0;
        for (int i = 0; i < n; i++) {
            long long val = 1LL << p[i];
            sum_p += val;
            if (sum_p > k) break;
        }

        if (sum_p <= k) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
