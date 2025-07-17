#include <stdio.h>

void solve(){
    int a, b; 
    int c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    int gellyfish_moves_needed;
    if (b < d) {
        gellyfish_moves_needed = b;
    } else {
        gellyfish_moves_needed = d;
    }

    int flower_moves_needed;
    if (a < c) {
        flower_moves_needed = a;
    } else {
        flower_moves_needed = c;
    }

    if (gellyfish_moves_needed <= flower_moves_needed) {
        printf("Gellyfish\n");
    } else {
        printf("Flower\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        solve();
    }

    return 0;
}