/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void f(int n,int a[],int i)
{
    if(n<=0)
    {
        a[i]=n;
        return;
    }
    a[i]=n;
    f(n-5,a,i+1);
}

int main(){
    int n;
    scanf("%d",&n);
    f(n,a,0);
    printf("%d",a[0]);
	return 0;
}