#include <stdio.h> 

void sort(int *arr, int len){
    for(int i=0; i<len; i++){
        for(int j=0; j<len-1; j++){
            if(arr[j] <  arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return;
}

int main(){
    int t; 
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int sum = 0;
        int n, k;
        scanf("%d%d", &n, &k);

        int arr_left[n];
        for(int j=0; j<n; j++){
            scanf("%d", &arr_left[j]);
        }
        int arr_right[n];
        for(int j=0; j<n; j++){
            scanf("%d", &arr_right[j]);
        }

        int unchecked_arr[n];

        for(int i=0; i<n; i++){
            unchecked_arr[i] = 0;
        }

        int z = 0;
        for(int j=0; j<n; j++){
            if(arr_left[j] > arr_right[j]){

                sum += arr_left[j];
                unchecked_arr[z] = arr_right[j];
                z++;

            } else if(arr_left[j] < arr_right[j]){
                sum += arr_right[j];
                unchecked_arr[z] = arr_left[j];
                z++;
            }
        }

        sort(unchecked_arr, z);

        for(int j=0; j<k-1; j++){
            sum += unchecked_arr[j];
        }

        printf("sum: %d", sum+1);
        sum = 0;
    }
    
    return 0;
}