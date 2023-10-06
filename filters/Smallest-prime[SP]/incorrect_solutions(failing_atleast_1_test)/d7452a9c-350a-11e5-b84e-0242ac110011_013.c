/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int x,n,y;

int check_prime(int n){
        for(x=2;x<=n/2;x++){
            if(n%x==0){
            return 10;}
        }
        return 2;
    }       
            
        
    
//Complete function definitions

int main(){
    scanf("%d",&n);
    for(y=n;y<=n;y++){
        if(check_prime(y)==2){
            printf("%d",y);
            break;
        }
            
        }
    
    
    
    //Write your code here
    
    return 0;
}