/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i;
int s=0;
for (i=2;i<=num/2;i++) 
{
    if (num%i==0) 
  {
    s=1;
    break;
  }
}
    if (s==0) 
      return 1;
    else 
      return 0;
}
int main() {
 int a; int m;
     scanf("%d",&a);
     m=check_prime(a);
     printf("%d",m);
     
    
    return 0;
}