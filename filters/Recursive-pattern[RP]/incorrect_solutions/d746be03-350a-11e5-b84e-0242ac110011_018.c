/*execute-result:OK*/
/*compile-errors:e175_306050.c:22:5: warning: unused variable 'i' [-Wunused-variable]
int i;
    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int c=0;
int N;
void series(int a)
{
printf("%d ",a);
if(a>0 && c==0) 
series(a-5);
if(a<=0)
{
    c=1;
series(a+5);
}
if(a<=N && c==1)
{
    series(a+5);
}
}

int main()
{
int i;
scanf("%d",&N);
series(N);
return 0;
}