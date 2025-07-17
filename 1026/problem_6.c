#include <stdio.h>

int fxn(int x, int y) {
    if (x == 0 || y == 0) return 0;
    return (x % y) + (y % x);
}

void solve(int n){
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_beauty = 0;

    for (int i = 0; i < n; i++) {
        int curr = a[i];

        for (int j = (i - 1); j >= 0 && j >= i - 10; j--) {
            int beauty = fxn(curr, a[j]);
            if (beauty > max_beauty) {
                max_beauty = beauty;
            }
        }

        printf("%d\n", max_beauty);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        solve(n);
    }
    return 0;
}
