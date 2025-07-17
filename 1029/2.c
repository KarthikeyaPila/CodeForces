#include <stdio.h>
#include <stdlib.h>

void solve(){
    int n;
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        p[i] = i + 1;
    }

    for(int i = 1; i < n; i += 2){
        int temp = p[i];
        p[i] = p[i - 1];
        p[i - 1] = temp;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);

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
