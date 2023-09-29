/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i,d=0;
    if(num==2) {return 1;}
    else{
         for (i=2;i<num;i++){
                      if(num%i==0){break;}
                      else{d=1;}}}
             return d;}


int main(){
    printf("%d",check_prime(9));
    
    
    

    
    return 0;
}