#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

void solve() {
    int n, q;
    scanf("%d %d", &n, &q);

    int* b = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int (*ops_array)[3] = (int (*)[3])malloc(sizeof(int) * q * 3);
    
    // last_op_idx[k] stores the 1-based index of the last operation that modified position k.
    // Initialized to 0, meaning no operation has modified it yet.
    int* last_op_idx = (int*)malloc(sizeof(int) * (n + 1)); // 1-indexed for array positions
    for (int i = 0; i <= n; i++) { // Initialize with 0
        last_op_idx[i] = 0;
    }

    // Read all modifications and populate ops_array and last_op_idx
    for (int i = 0; i < q; i++) {
        scanf("%d %d %d", &ops_array[i][0], &ops_array[i][1], &ops_array[i][2]);
        // Store 1-indexed operation index (i+1 because ops_array is 0-indexed)
        last_op_idx[ops_array[i][2]] = i + 1; 
    }

    int possible = 1; // Flag to indicate if a solution exists

    // Iterate through all modifications to check consistency conditions
    for (int i = 0; i < q; i++) {
        // Convert 1-indexed problem input to 0-indexed for array 'b'
        int x_idx = ops_array[i][0] - 1; 
        int y_idx = ops_array[i][1] - 1; 
        int z_idx = ops_array[i][2] - 1; 

        // Condition 1: The final value at z_idx must be less than or equal to
        // the final values at x_idx and y_idx.
        if (b[z_idx] > b[x_idx] || b[z_idx] > b[y_idx]) {
            possible = 0;
            break; 
        }

        // Condition 2: If this is the *last* operation that modifies z_idx,
        // then the final value b[z_idx] must be exactly the minimum of the
        // final values of x_idx and y_idx.
        if (last_op_idx[ops_array[i][2]] == i + 1) {
            if (b[z_idx] != min(b[x_idx], b[y_idx])) {
                possible = 0;
                break; 
            }
        }
    }

    // Output the result
    if (possible) {
        // If all conditions pass, then setting a_k = b_k for all k is a valid solution.
        printf("output: ");
        for (int i = 0; i < n; i++) {
            printf("%d%c", b[i], (i == n - 1) ? '\n' : ' ');
        }
    } else {
        printf("output: ");
        printf("-1\n");
    }

    // Free dynamically allocated memory to prevent leaks
    free(b);
    free(ops_array);
    free(last_op_idx);
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases
    while (t--) {
        solve(); // Solve each test case
    }

    return 0;
}