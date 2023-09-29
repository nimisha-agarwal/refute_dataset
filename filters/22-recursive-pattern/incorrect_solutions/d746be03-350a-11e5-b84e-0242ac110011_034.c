/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void series(int a)
{
if(a>0) 
printf("%d",a);
return series(a-5);
if(a<=0)
return series(a+5);
}

int main(){
int i;
scanf("%d",&i);
series(i);
	return 0;
}