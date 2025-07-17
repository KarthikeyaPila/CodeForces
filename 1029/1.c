#include <stdio.h>

void solve() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int door_arr[n];
    for (int i =0; i<n; i++) {
        scanf("%d", &door_arr[i]);
    }

    int time = 0;
    int button_used = 0;
    int button_end_time = -1;

    for (int i =0; i<n; i++) {
        if (door_arr[i] == 1) {
            if (!button_used) {
                button_used = 1;
                button_end_time = time + x;
            }
            if (time >= button_end_time) {
                printf("NO\n");
                return;
            }
        }
        time++;
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
