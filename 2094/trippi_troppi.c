#include <stdio.h> 
#include <string.h>

int main(){
    int t; 
    scanf("%d", &t);
    getchar();

    while(t--){
        char str[100];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;

        char out[4];
        int j=0; 
        if(str[0] != '\0'){
            out[j++] = str[0];
        }

        for(int i=1; i<strlen(str); i++){
            if(str[i-1] == ' ' && str[i] != ' '){
                out[j++] = str[i];
            }
        }
        out[j] = '\0'; 

        printf("%s\n", out);
    }

    return 0;
}