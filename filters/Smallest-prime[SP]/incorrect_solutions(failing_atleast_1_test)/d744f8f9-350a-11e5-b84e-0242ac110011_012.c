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
     while (m<=1) 
     {
     if (m==1)  
        {
            break;
        }  
        a=a+1; 
        }
        printf("%d",a);
    return 0;
}