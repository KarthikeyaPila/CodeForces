#include <stdio.h> 
#include <string.h> 

void solution(int n){
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // for(int i=0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }

    int left_counter=0, right_counter = 0; 
    int i=0;
    int j=n-1;


    while((arr[0] + arr[j])%2 != 0){
        j = j-1;
        left_counter++;
    }
    // printf("\n%d", left_counter);

    while((arr[i] + arr[n-1])%2 != 0){
        i += 1;
        right_counter++;
    }
    // printf("\n%d", right_counter);

    printf("%d", left_counter > right_counter ? right_counter : left_counter);

    return;
}

int main(){
    int t;
    scanf("%d\n", &t);

    while(t--){
        int n; 
        scanf("%d", &n);
        solution(n);
    }

    return 0;
}