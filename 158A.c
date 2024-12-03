#include <stdio.h>

int main() {
    int n, k;
    int score[51];
    int advancing_parts = 0;

    scanf("%d %d", &n, &k);    

    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }

    int kth_score = score[k - 1];

    for (int i = 0; i < n; i++) {
        if (score[i] >= kth_score && score[i] > 0) {
            advancing_parts++;
        }
    }

    printf("%d\n", advancing_parts);

    return 0;
}