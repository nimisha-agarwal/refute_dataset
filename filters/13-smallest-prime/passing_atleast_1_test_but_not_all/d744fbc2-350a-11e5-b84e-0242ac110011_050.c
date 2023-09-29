/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
  
    int i;
    for(i=2;i<num;i=i+1)//starting from 2.
    {
      if(num%i==0)//condition for non-prime number.
      return 0;
    }
    
      return num;
}
    
        
int main(){
    int num;
    scanf("%d",&num);
    while(!check_prime(num))
    num=num+1;
    printf("%d",num);
    return 0;
}