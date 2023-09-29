/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pt(int n,int p,int f)
{
    if(p<=0)f=+5;
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