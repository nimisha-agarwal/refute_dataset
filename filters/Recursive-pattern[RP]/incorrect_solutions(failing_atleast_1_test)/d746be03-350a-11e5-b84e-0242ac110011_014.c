/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void series(int a)
{
if(a>0)    
return series(a-5);
if(a<0)
return series(a+5);
}

int main(){
int a;
scanf("%d",&a);
printf("%d ",series(a));
	return 0;
}