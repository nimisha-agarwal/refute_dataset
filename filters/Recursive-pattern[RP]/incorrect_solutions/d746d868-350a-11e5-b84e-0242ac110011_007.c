/*compile-errors:e175_306061.c:5:17: warning: data argument not used by format string [-Wformat-extra-args]
    printf("&d",p);
           ~~~~ ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pt(int n,int p,int f)
{
    if(p<=0)f=+5;
    printf("&d",p);
    if(p==n)
    return;
    pt(n,p+f,f);
}
int main(){
    int n;
    scanf("%d",&n);
    int f=-5;
    pt(n,n,f);
	return 0;
}