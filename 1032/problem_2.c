#include <stdio.h>
#include <string.h>

void solve(){
    int n;
    char s[1000010];

    scanf("%d", &n);
    scanf("%s", s);

    int hash[26] = {0};

    for(int i=0; i<n; i++){
        hash[s[i] - 'a']++;
    }

    for(int i=1; i<n-1; i++){
        if(hash[s[i] - 'a'] > 1){
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
