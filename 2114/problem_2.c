#include <stdio.h>
#include <string.h>

void solve(){
    int n, k;
    scanf("%d%d", &n, &k);
    char s[n + 1];
    scanf("%s", s);

    int count0 = 0;
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if (s[i] == '0'){
            count0++;
        } else {
            count1++;
        }
    }

    int pairs = (count0 / 2) + (count1 / 2);

    int possible = 0;
    if(k <= n/2 && k <= pairs){
        for(int x = 0; x <= k; x++){
            int y = k - x;
            if(2 * x <= count0 && 2 * y <= count1){
                possible = 1;
                break;
            }
        }
    }

    if(count0 == n || count1 == n){
        int total_pairs = n / 2;
        int bad_pairs = total_pairs - k;
        if ((bad_pairs % 2 == 0 && k <= total_pairs) && possible){
            printf("YES\n");
            return;
        }
        else {
            printf("NO\n");
            return;
        }
    }


    printf("NO\n");
    return;
}


int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }

    return 0;
}
