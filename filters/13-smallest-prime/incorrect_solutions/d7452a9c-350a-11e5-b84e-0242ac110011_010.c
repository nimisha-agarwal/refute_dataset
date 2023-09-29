/*compile-errors:e158_278290.c:3:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num){
                    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int x,n,y;
int check_prime(int num){
    scanf("%d",&n);
    y=n;
        for(x=2;x<=y/2;){
            if(y%x!=0){
                x=x+1;}
                else{
                    y=y+1;}
        }
        return y;
            
        
    }

        
            
            
            
    


//Complete function definitions

int main(){
    
    //Write your code here
    
    return 0;
}