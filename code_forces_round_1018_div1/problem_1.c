#include <stdio.h> 
#include <string.h> 

void create_num_arr(int *arr, int n){
    for(int i=0; i<n; i++){
        arr[i] = i;
    }
    return;
}

int count_less_than(char *s, size_t len){
    int count=0; 
    for(size_t i=0; i<len; i++){
        if(s[i] == '<'){
            count++;
        }
    }

    return count+1;
}

int main(){
    int t; 
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n; 
        char s[101];
        scanf("%d%s", &n, s);
        int number = n;

        int arr[101] = {0};
        int count_less = count_less_than(s, strlen(s));

        int current_down = count_less - 1;
        int current_up = count_less + 1;

        arr[0] = count_less;

        for(size_t j=1, k=0; j<strlen(s)+1; j++, k++){

            if(s[k] == '>'){
                arr[j] = current_up;
                current_up += 1;
            } else if(s[k] == '<'){
                arr[j] = current_down;
                current_down -= 1;
            }

        }
        
        for(int k=0; k<n; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    return 0;
}