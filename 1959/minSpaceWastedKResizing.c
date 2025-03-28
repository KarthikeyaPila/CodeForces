    #include <stdio.h> 
    #define INT_MIN -2147483647-1
    #define INT_MAX  2147483647 

    // [10,20]  k = 0

    // sort: 10 20

    // [10,20,30]  k = 1

    // sort: 10 20 30

    // [10,20,15,30,20]  k = 2
    // [10,20,20,30,30]

    // sort: 10 15 20 30

    
// Bubble sort function to sort the array

void bubble_sort(int *arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j = 0; j < size - i-1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int minSpaceWastedKResizing(int* nums, int numsSize, int k){
    if(numsSize == 1){
        return 0;
    }
    
    int diffs[numsSize-1];

    for(int i=0; i<numsSize-1; i++){
        diffs[i] = nums[i + 1] - nums[i];
    }

    bubble_sort(diffs, numsSize-1);

    int total_sum = 0;
    for(int i=0; i<numsSize-1; i++){
        total_sum += diffs[i];
    }

    for(int i=0; i<k; i++){
        total_sum -= diffs[numsSize - 2 - i];
    }

    return abs(total_sum);
}
