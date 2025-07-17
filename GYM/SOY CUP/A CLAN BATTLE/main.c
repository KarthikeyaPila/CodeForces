#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int boss_round[1000005];

void solution(int n, int m, long long k){
    int *arr = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    memset(boss_round, 0, (m + 1) * sizeof(int));
    int global_min_round = 0;
    int possible = 1;
    
    for(int i=0; i<n; i++){
        int boss = arr[i];
        //tells us the level of the boss  -> gives (j-k)
        int next_round = boss_round[boss] + 1;
        if(next_round >= 2 && next_round-k > global_min_round){
            possible = 0;
            break;
        }
        boss_round[boss] = next_round;
    
        
        while(1){
            int pass = 1;

            for(int j=1; j<=m; j++){
                if(boss_round[j] <= global_min_round){
                    pass = 0; 
                    break;
                }
            }

            if(pass){
                global_min_round++;
            } else {
                break;
            }
        }
    }
    


    if(possible){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return;
}


int main(){
    int t; 
    scanf("%d", &t);

    while(t--){
        int n, m;
        long long k;
        scanf("%d%d%lld", &n, &m, &k);

        solution(n, m, k);
    }

    return 0;
}