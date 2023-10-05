/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{int a=0;
int k;
for(k=2;k<(num/2);k++)
{if(num%k==0)
{a=1;}
}
if(a==0)
{return 1;}
else{return 0;}
}
int main()
{
    int n,j,b,c,x;
scanf("%d",&n);
for(j=3;j<n-1;j++)
{
    b=check_prime(j);
if(b==1)
{
    c=check_prime(j+2);
if(c==1)
{
    x=x+1;
    
}
}
}
printf("%d",x);
return 0;
}