/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void recurr1(int k);
void recurr2(int k);
void recurr1(int k)
{
printf("%d",k); 
if(k<=0)
{
recurr2(k+5);    
return;
}
recurr1(k-5);
}
void recurr2(int k)
{
if(k>n)
return;
printf("%d",k);
recurr2(k+5);
}


int main()
{

scanf("%d",&n);
recurr1(n);
    
    
	return 0;
}