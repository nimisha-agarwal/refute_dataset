/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int flag=1;
int i=0;
int N;
int print_pattern(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n>0)
    {
        N=n;
        printf("%d ",n);
        return print_pattern(n-5);
    }
    return N;
}
int main(){
    int n;
    scanf("%d",&n);
    int d=print_pattern(n);
    printf("%d ",d);
	return 0;
}