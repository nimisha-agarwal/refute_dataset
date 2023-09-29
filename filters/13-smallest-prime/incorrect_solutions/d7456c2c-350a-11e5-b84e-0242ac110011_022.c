/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int prime(int a)
{
for(int b=2;b<=a-1;b++)
{
if(a%b==0)
return 0;
}
return 1;
}
int main()
{
int number;
scanf("%d",&number);
while(1)
{
if(prime(number)==0)
{
printf("%d",number);
break;
}
number=number+1;
}
}