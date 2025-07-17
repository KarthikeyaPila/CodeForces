#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>

int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

void solve(){
    int n; 
    scanf("%d", &n);

    int arr[n]; 
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), cmp);

    bool all_equal = true; 
    for(int i=1; i<n; i++){
        if(arr[i] != arr[0]){
            all_equal = false; 
            break;
        }
    }

    if(all_equal){
        printf("NO\n");
        return;
    }

    for(int i=0; i<n-1; i++){
        int temp = arr[i]; 
        arr[i] = arr[i + 1]; 
        arr[i + 1] = temp;
    }

    printf("YES\n");
    printf("%d\n", n);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return;
}

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        solve();
    }

    return 0;
}
