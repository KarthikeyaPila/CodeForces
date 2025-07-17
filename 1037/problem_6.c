#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// --------------------Karthikeya Pila -----------------------------------------

int comp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int min_element(int *arr, int size){
    int min = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int median(int *arr, int size){
    int temp[size];
    for(int i=0; i<size; i++){
        temp[i] = arr[i];
    }

    qsort(temp, size, sizeof(int), comp);

    return temp[size/2];
}

void solve(){
    int n; 
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int solution = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int len = j-i+1;
            int sub[len];

            for(int k=0; k<len; k++){
                sub[k] = arr[i+k];
            }

            int min = min_element(sub, len);
            int med = median(sub, len);

            if(solution < (med - min)){
                solution = med - min;
            }
        }
    }

    printf("out: %d\n", solution);

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
