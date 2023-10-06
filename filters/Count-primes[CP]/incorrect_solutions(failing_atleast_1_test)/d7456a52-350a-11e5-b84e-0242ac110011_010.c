/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int x,f;
    for(x=2;x<num;x++){
        if(num%x==0)
         {
             f=0;
             break;
         }
         f=1;
         
    }
    printf("%d",f);
 return f;
}


int main(){
    
 check_prime(5);
    
    return 0;
}