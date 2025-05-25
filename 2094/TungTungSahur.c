    #include <stdio.h> 
    #include <string.h>

    float count_until_different(char *s, size_t len, char A){
        float count = 0;
        int i=0; 

        while(i<(int)len && s[i]==A) {
            count += 1.0;
            i++;
        }

        return count;
    }

    void solve(char *p, char *s){
        size_t len_p = strlen(p);
        size_t len_s = strlen(s);

        if(len_s > 2*len_p){
            printf("NO\n");
            return;
        }

        int i=0, j=0;
        int valid = 1;
        
        while(i<len_p && valid && j<len_s){
            if (p[i] != s[j]) {
                valid = 0;
                break;
            }

            float p_count = count_until_different(p+i , len_p - i, p[i]);
            float s_count = count_until_different(s+j, len_s - j, s[j]);
            
            if((p_count - (s_count/2) < 0) || (s_count < p_count)){
                valid = 0;
                break;
            }
            
            i += (int)p_count;
            j += (int)s_count;
        
        }

        if(i!=len_p || j!=len_s){
            valid = 0;
        }

        if(!valid){
            printf("NO\n");
        } else {
            printf("YES\n");
        }

        return ;
    }


    int main(){
        int t;
        scanf("%d", &t);

        while(t--){
            char p[2000000];
            char s[2000000];

            scanf("%s", p);
            scanf("%s", s);

            solve(p, s); 
        }   

        return 0;
    }