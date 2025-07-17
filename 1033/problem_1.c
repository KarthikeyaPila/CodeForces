#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_square(int l1, int b1, int l2, int b2, int l3, int b3){
    int area = (l1 * b1) + (l2 * b2) + (l3 * b3);
    int s = (int)round(sqrt(area));

    if(s*s != area){
        return false;
    }

    if((l1 == s && l2 == s && l3 == s && (b1 + b2 + b3) == s) || (b1 == s && b2 == s && b3 == s && (l1 + l2 + l3) == s)){
        return true;
    }

    if(s == l1){
        if(b2 == (s-b1) && b3 == (s-b1) && (l2 + l3) == s){
            return true;
        }
    }

    if(s == b1){
        if(l2 == (s - l1) && l3 == (s - l1) && (b2 + b3) == s){
            return true;
        }
    }

    return false;
}

void solve(){
    int l1, b1, l2, b2, l3, b3;
    scanf("%d%d%d%d%d%d", &l1, &b1, &l2, &b2, &l3, &b3);

    if(is_square(l1, b1, l2, b2, l3, b3)){
        printf("YES\n");
        return;
    } else{
        printf("NO\n");
        return;
    }

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