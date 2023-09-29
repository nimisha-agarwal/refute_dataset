/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int num)
{ int i;
  int found=0;
   for(i=2;i<num;i++)
   {  if(num%i==0)
       found=1;
   }
  return found;  
}
//Complete function definitions

int main(){
    int a=2;
    int check=check_prime(a);
    printf("%d",check);
    
    return 0;
}