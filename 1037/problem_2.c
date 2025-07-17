#include <stdio.h> 


// --------------------Karthikeya Pila -----------------------------------------
// good weather = 0; bad weather = 1
// hike takes k days
void solve(){
    size_t n; 
    int k; 
    scanf("%zu %d", &n, &k);

    int arr[n];
    for(size_t i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max_hike_days = 0; 

    for(size_t i=0; i<=n-k;){
        
        int good_day = 1; 
        for(int j=0; j<k; j++) {
            if(arr[i+j] == 1) {
                good_day = 0;
                break;
            }
        }

        if(good_day == 0){
            i++;
        } else {
            max_hike_days++;
            i += k+1;
        }
    }

    printf("%d\n", max_hike_days);

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