#include <stdio.h> 
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

void solve(){
    int n;
    scanf("%d", &n);

    int a[n];
    long long sum = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    // Find minimum element
    int current_min = a[0];
    long long answer = 0;

    for(int i = 0; i < n; i++){
        if(a[i] < current_min){
            current_min = a[i];
        }
        answer += current_min;
    }

    // Try improving by performing the operation once
    // Try all pairs (i < j) once
    // But to optimize, just pick largest a[j] and add to some earlier a[i]
    // We'll combine second largest into largest and recompute prefix min

    int max1 = 0, max2 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        } else if(a[i] > max2){
            max2 = a[i];
        }
    }

    // Perform operation: add max2 into max1
    // Then simulate again, placing 0 where max2 was
    int modified[n];
    int used = 0;
    for(int i = 0; i < n; i++){
        if(!used && a[i] == max2){
            modified[i] = 0;
            used = 1;
        } else if(a[i] == max1){
            modified[i] = max1 + max2;
            max1 = -1; // prevent double update
        } else {
            modified[i] = a[i];
        }
    }

    current_min = modified[0];
    long long alt = 0;

    for(int i = 0; i < n; i++){
        if(modified[i] < current_min){
            current_min = modified[i];
        }
        alt += current_min;
    }

    if(alt < answer){
        answer = alt;
    }

    printf("%lld\n", answer);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        solve();
    }

    return 0;
}
