/*compile-errors:e158_278290.c:8:5: warning: control may reach end of non-void function [-Wreturn-type]
    }       
    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int x,n,y;
int check_prime(int n){
        for(x=2;x<=n/2;x++){
            if(n%x==0){
            return 10;}
        }
    }       
            
        
    
//Complete function definitions

int main(){
    y=check_prime(4);
    printf("%d",y);
    
    
    //Write your code here
    
    return 0;
}