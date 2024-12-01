#include <stdio.h>
#include <string.h>

int main() {
    int buff; 
    scanf("%d", &buff);

    for (int i=0; i<buff; i++) {
        char arr[101]; 
        scanf("%100s", arr);
        int length = strlen(arr);

        if (length > 10) {
            printf("%c%d%c\n", arr[0], length-2, arr[length-1]); 
        } else {
            printf("%s\n", arr); 
        }
    }

    return 0;
}