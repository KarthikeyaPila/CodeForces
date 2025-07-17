#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int str_to_digit(char* str) {
    return atoi(str);
}

bool perfect_square(int num) {
    if (num < 0) return false;
    int root = (int)sqrt((double)num);
    return root * root == num;
}

void solve(char *str) {
    int number = str_to_digit(str);

    if (!perfect_square(number)) {
        printf("-1\n");
        return;
    }

    int root = (int)sqrt((double)number);

    for (int i = 0; i <= root; i++) {
        for (int j = 0; j <= root; j++) {
            if (i * i + j * j == number) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }

    printf("-1\n");
}

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        char str[5];
        scanf("%4s", str);
        solve(str);
    }

    return 0;
}
