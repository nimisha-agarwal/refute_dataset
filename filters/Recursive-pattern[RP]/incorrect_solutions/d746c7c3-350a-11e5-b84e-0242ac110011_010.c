/*execute-result:TL*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pattern2(int n,int k)
{
    if(n<=k)
    {
        printf("%d",n);
        pattern2(n+5,k);
    }
    
    
}

void pattern(int n,int k)
{
    if(n<=0)     
    {
        printf("%d",n); n+=5;
        pattern2(n,k);
    }
    else
    printf("%d",n);
    pattern(n-5,k);
}


int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    pattern(n,k);
	return 0;
}