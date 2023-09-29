/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a;
  for(a=2;a<=num-1;a++)
 { if(num!=1&&num%a!=0)
  continue;
  else if(num!=1&&num%a==0)
  num=num+1;continue;
 }
 return num;
} 

int main(){
    int num,b;
    scanf("%d",&num);
b=check_prime(num);
printf("%d",b);
 
    return 0;
}