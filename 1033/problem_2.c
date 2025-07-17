    #include <stdio.h>

    int make_pos_mod(int i, int n){
        return(i%n+n)%n;
    }

    void solve(){
        int n,s;
        scanf("%d%d", &n, &s);

        int count=0;

        for(int i = 0; i < n; i++){
            int dx, dy, x, y;
            scanf("%d%d%d%d", &dx, &dy, &x, &y);

            int mx = make_pos_mod(-1*dx*x, s);
            int my = make_pos_mod(-1*dy*y, s);

            if(mx == my){
                count++;
            }
        }

        printf("output: %d\n", count);

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