/*compile-errors:e175_306050.c:5:13: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
printf("%d",&a);
        ~~  ^~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void series(int a)
{
if(a>0) 
printf("%d",&a);
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