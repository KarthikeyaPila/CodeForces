#include <stdio.h> 

enum pos{
    left, // 0 
    right, // 1
    top, // 2
    bottom // 3
};

// a a a a
// a a a a
// a a a a
// a a a a
// a a a a

// mxn a,b
int cut_pos(int m, int n, int a, int b){    

    int pos_from_left = a;
    int pos_from_right = m-a;
    int pos_from_top = b;
    int pos_from_bottom = n-b;

    if(pos_from_left >= pos_from_right && pos_from_left > pos_from_bottom && pos_from_left > pos_from_top){
        return pos_from_left;
    } 
    else if(pos_from_right >= pos_from_left && pos_from_right > pos_from_bottom && pos_from_right > pos_from_top){
        return pos_from_right;
    }
    else if(pos_from_top >= pos_from_bottom && pos_from_top > pos_from_left && pos_from_top > pos_from_right){
        return pos_from_top;
    }
    else if(pos_from_bottom >= pos_from_top && pos_from_bottom > pos_from_left && pos_from_bottom > pos_from_right){
        return pos_from_bottom;
    }

    return 1;
}

int main(){
    
    printf("%d", left);
}