/*execute-result:OK*/
/*compile-errors:e158_278093.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num) {
    
    int i ;
    
    for (i=2 ; i<num ; i++){ 
        
        if ( num % i == 0){
        return 0 ;
    }
    else 
    return 1 ;
    }
}

int main(){
    int n,i,s ;
    s = 0;
    scanf("%d",&n);
    for (i=2 ; i<=(n-2) ; i++) {
        int x;
        x = check_prime(i) ;
        if ( i==1 ) {
            int y;
            y = check_prime(i+2) ;
            if ( y==1 ) {
                s = s+1 ;
            }
        }
    }
    
    printf("%d",s);
    
    return 0;
}