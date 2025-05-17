    #include <stdio.h> 
    #include <string.h> 
    #include <stdlib.h>
     
     
    // all could be 1 but there should be a 0
    // there cannot be consicutive 0.
     
    void solution(int n){
        int count_0 = 0;
        int count_1 = 0;
        int arr[n];
     
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
     
        for(int i=0; i<n-1; i++){
            if(arr[i]==0 && arr[i+1]==0){
                printf("YES\n");
                return;
            }
        }

        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                count_0++;
            }
            else if(arr[i] == 1){
                count_1++;
            }
        }
     
        if(n==2 && arr[0]==1 && arr[1]==1){
            printf("YES\n");
            return;
        }

        if(count_0 == 0 || count_1 == 0){
            printf("YES\n");
            return;
        } else {
            printf("NO\n");
            return;
        }
        return;
    }
     
    int main(){
        int t;
        scanf("%d", &t);
     
        while(t--){
            int n; 
            scanf("%d", &n);
            solution(n);
        }
     
        return 0;
    }