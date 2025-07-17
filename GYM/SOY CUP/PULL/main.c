#include <stdio.h>
#include <math.h>

double min(double a, double b){
    return a<b ? a : b;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);

        double output=0.0;
        double prob_no_6_star_yet=1.0;

        for(int i=1; i<=10000; i++){
            double p;
            if(i<=c){
                p=a/100.0;
            }else{
                p=min(1.0, (a+(i-c)*b)/100.0);
            }

            output+=prob_no_6_star_yet*p*i;
            prob_no_6_star_yet*=(1.0-p);

            if(p>=1.0){
                break;
            }
        }

        printf("%.10f\n", output);
    }

    return 0;
}
