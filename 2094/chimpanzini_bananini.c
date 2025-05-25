#include <stdio.h> 
#include <stdlib.h> 

int rizzness(int *arr, int len){
    int rizz = 0;
    for(int i = 0; i < len; i++){
        rizz += arr[i] * (i+1);
    }
    return rizz;
}

void cyclic_shift(int* arr, int size) {
    if (size <= 1) return;
    int last = arr[size - 1];

    for(int i = size - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    return;
}

void reverse(int *arr, int size){
    int right = size-1;
    int left = 0;

    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int *append(int *arr, int *size, int *capacity, int k){
    if(*size == *capacity){
        int new_capacity = (*capacity == 0) ? 1 : (*capacity * 2);
        int *new_arr = (int*)malloc(new_capacity * sizeof(int));
        if(new_arr == NULL) return NULL;
        for(int i=0; i < *size; i++){
            new_arr[i] = arr[i];
        }
        free(arr);
        arr = new_arr;
        *capacity = new_capacity;
    }
    arr[*size] = k;
    (*size)++;
    return arr;
}

void solve(int q){
    int size = 0;
    int capacity = 0;
    int rizzness=0;
    int sum = 0;
    int *arr = NULL;
    
    for(int i=0; i<q; i++){
        int d, k;
        scanf("%d", &d);

        switch (d)
        {
        case 1:
            cyclic_shift(arr, size);
            break;
        case 2:
            reverse(arr, size);
            break;
        case 3:
            scanf("%d", &k);
            arr = append(arr, &size, &capacity, k);
            break;
        default:
            printf("should not reach here.\n");
            break;
        }

        printf("%d\n", rizzness);
    }
    
    free(arr);
    return;
}

int main(){
    int t; 
    scanf("%d", &t);

    while(t--){
        int q; 
        scanf("%d", &q);
        solve(q);
    }

    return 0;
}