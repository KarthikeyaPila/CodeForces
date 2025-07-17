    #include <stdio.h> 
    #include <stdlib.h>

    void solve(){
        int a, x, y;
        scanf("%d%d%d", &a, &x, &y);

        int alice_dist_x = abs(a-x);
        int alice_dist_y = abs(a-y);

        for(int b=1; b < 101; b++){
            if(b == a){
                continue;
            } 

            int bob_dist_x = abs(b-x);
            int bob_dist_y = abs(b-y);

            if(bob_dist_x < alice_dist_x && bob_dist_y < alice_dist_y){
                printf("YES\n");
                return;
            }
        }

        printf("NO\n");
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
