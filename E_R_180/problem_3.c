#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* my_lower_bound(int *first, int *last, int val) {
    while (first < last) {
        int *mid = first + (last - first) / 2;
        if (*mid < val) {
            first = mid + 1;
        } else {
            last = mid;
        }
    }
    return first;
}

int* my_upper_bound(int *first, int *last, int val) {
    while (first < last) {
        int *mid = first + (last - first) / 2;
        if (*mid <= val) {
            first = mid + 1;
        } else {
            last = mid;
        }
    }
    return first;
}

void solve() {
    int n;
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    if (a == NULL) {
        return;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), cmp);

    long long count = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int sum_ij = a[i] + a[j];
            int required_lower_k_val = a[n - 1] - sum_ij;
            int required_upper_k_val = sum_ij;

            int* k_start_ptr = my_lower_bound(a + j + 1, a + n, required_lower_k_val + 1);

            int* k_end_ptr = my_lower_bound(a + j + 1, a + n, required_upper_k_val);

            if (k_end_ptr > k_start_ptr) {
                count += (k_end_ptr - k_start_ptr);
            }
        }
    }

    printf("out: %lld\n", count);
    free(a);
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