    #include <stdio.h>
     
    int gcd(int a, int b) {
        while(b) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
     
    int a[5005];
     
    void solve(){
        int n;
        scanf("%d", &n);
     
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
     
        int g = a[0];
     
        for(int i = 1; i < n; i++) {
            g = gcd(g, a[i]);
        }
     
        int count = 0;
        int has_g = 0;
     
        for(int i = 0; i < n; i++) {
            if(a[i] != g) {
                count++;
            } else {
                has_g = 1;
            }
        }
     
        if(!has_g) {
            // see if gcd of any pair == g;
            int can_make_g = 0;
            for(int i = 0; i < n && !can_make_g; i++) {
                for(int j = i + 1; j < n && !can_make_g; j++) {
                    if(gcd(a[i], a[j]) == g) {
                        can_make_g = 1;
                    }
                }
            }
     
            if(!can_make_g) {
                count++;
            }
        }
     
        printf("%d\n", count);
    }
     
    int main() {
        int t;
        scanf("%d", &t);
     
        while(t--) {
            solve();
        }
     
        return 0;
    }