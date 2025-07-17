#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int mat[MAX][MAX];
bool row_active[MAX], col_active[MAX];

int n, m;

bool row_dominant(int r) {
    for (int j = 0; j < m; j++) {
        if (!col_active[j]) continue;
        int min = mat[r][j];
        for (int i = 0; i < n; i++) {
            if (row_active[i] && mat[i][j] < min) {
                min = mat[i][j];
            }
        }
        if (mat[r][j] != min) return false;
    }
    return true;
}

bool col_dominant(int c) {
    for (int i = 0; i < n; i++) {
        if (!row_active[i]) continue;
        int max = mat[i][c];
        for (int j = 0; j < m; j++) {
            if (col_active[j] && mat[i][j] > max) {
                max = mat[i][j];
            }
        }
        if (mat[i][c] != max) return false;
    }
    return true;
}

void solve() {
    for (int i = 0; i < n; i++) row_active[i] = true;
    for (int j = 0; j < m; j++) col_active[j] = true;

    int active_cells = n * m;

    while (active_cells > 0) {
        bool removed = false;

        for (int i = 0; i < n; i++) {
            if (row_active[i] && row_dominant(i)) {
                row_active[i] = false;
                for (int j = 0; j < m; j++)
                    if (col_active[j]) active_cells--;
                removed = true;
                break;
            }
        }

        if (removed) continue;

        for (int j = 0; j < m; j++) {
            if (col_active[j] && col_dominant(j)) {
                col_active[j] = false;
                for (int i = 0; i < n; i++)
                    if (row_active[i]) active_cells--;
                removed = true;
                break;
            }
        }

        if (!removed) {
            printf("NO\n");
            return;
        }
    }

    printf("YES\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                scanf("%d", &mat[i][j]);
        solve();
    }
    return 0;
}
