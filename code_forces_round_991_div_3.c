#include <stdio.h>
#include <string.h>

int main() {
    int t; 
    scanf("%d", &t); 

    while(t--){
        int n, m; 
        scanf("%d %d", &n, &m); 

        int total_length=0, x=0;

        for (int i=0; i<n; i++){
            char word[11]; 
            scanf("%s", word);

            int word_length = strlen(word);
            if(total_length + word_length + (x>0 ? 1 : 0) <= m){
                total_length += word_length + (x>0 ? 1 : 0); 
                x++; 
            } else {
                break; 
            }
        }

        printf("%d\n", x);
    }

    return 0;
}
