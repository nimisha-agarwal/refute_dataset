/*compile-errors:e158_278052.c:24:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
e158_278052.c:29:9: warning: expression result unused [-Wunused-value]
    if((y,x==1)&&((i+2)<n))
        ^
e158_278052.c:31:9: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
        j++;
        ^
e158_278052.c:23:16: note: initialize the variable 'j' to silence this warning
    int n,x,y,j,i;
               ^
                = 0
e158_278052.c:24:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    scanf("%d",n);
               ^
e158_278052.c:23:10: note: initialize the variable 'n' to silence this warning
    int n,x,y,j,i;
         ^
          = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{
    int k=0;
    for(int l=1;l<=num;l++)
    {
        if ((num%l)==0)
        k++;
    }
    if(k==2)
{
  return 1;
}
else
{
return 0;
}
    
}

int main()
{
    int n,x,y,j,i;
    scanf("%d",n);
    for(i=2;i<=n;i++)
    {
    x=check_prime(i);
    y=check_prime(i+2);
    if((y,x==1)&&((i+2)<n))
    {
        j++;
    }
}
   
    
    
    
    
   
    
    return 0;
}