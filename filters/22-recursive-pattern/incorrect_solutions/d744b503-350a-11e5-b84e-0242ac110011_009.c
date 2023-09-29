/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n);
	return 0;
}
void fun(int a[7],int n)
{
    a[0]=n;
    int i;
    for(i=1;i<=3;i++)
    {
        a[i]=n-5;
    }
    for(i=6;i>=4;i--)
    {
        a[i]=n-5;
    }
    return; 
}