#include <stdio.h>
#include <string.h>

int pref_match(char *l, char *r){
    int count = 0;
    while (l[count] && r[count] && l[count]==r[count]){
        count++;
    }

    return count;
}


void solve(){
    char l[25], r[25];
    scanf("%s%s", l, r);

    int len = strlen(l);
    int found = pref_match(l, r);
    int output = 2*(len-found);

    printf("output: %d\n", output);

    return;
}


int main(){
    int t;
    scanf("%d", &t);
    
    while (t--){
        solve();
    }
    
    return 0;
}
