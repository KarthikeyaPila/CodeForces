#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int coins=0; 
        int n;
        scanf("%d", &n);

        int buildings[n][n];
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                scanf("%d", &buildings[j][k]);
            }
        }

        int comp_A[n], comp_B[n];
        for(int j=0; j<n; j++){
            scanf("%d", &comp_A[j]);
        } 
        for(int j=0; j<n; j++){
            scanf("%d", &comp_B[j]);
        } 

        int used_row[n], used_col[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &comp_A[i]);
            used_row[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &comp_B[i]);
            used_col[i] = 0;
        }

        //check horiz
        for(int j=0; j<n; j++){
            for(int k=0; k<n-1; k++){
                if(buildings[j][k] == buildings[j][k+1]){
                    coins += comp_A[j];
                    comp_A[j] = 0;
                }   
            }
        }

        //check verti
        for(int j=0; j<n; j++){
            for(int k=0; k<n-1; k++){
                if(buildings[k][j] == buildings[k][j+1]){
                    coins += comp_B[j];
                    comp_B[j] = 0;
                }   
            }
        }

        // check all
        for(int j=0; j<n-1; j++){
            for(int k=0; k<n-1; k++){
                if(buildings[j][k] < buildings[j][k+1] && buildings[j+1][k] < buildings[j+1][k+1]){
                    coins = -1;
                }   
            }
        }

        printf("\ncoins %d: %d\n", i+1, coins);
    }
}

