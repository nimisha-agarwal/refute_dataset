/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a;
  for(a=2;a<=num-1;a++)
 { if(num!=1&&num%a!=0)
  break;
  if(num!=1&&num%a==0)
  return 1;
 }
 return num;
} 

int main(){
    int num;
    scanf("%d",&num);
  if(num==check_prime(num))
  ;
    printf("%d",num);
    return 0;
}