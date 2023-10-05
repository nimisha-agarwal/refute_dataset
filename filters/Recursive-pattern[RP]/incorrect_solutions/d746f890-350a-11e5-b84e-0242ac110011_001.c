/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void print(n,m)
{ 
    int flag=0;
    printf("%d ",m);
    if(n==m)
    return;
    else if(m>0)
    {
     print(n,m-5);
     flag=1;
    }
    else if(flag)
    print(n,m+5);
}
int main()
{
     int n,m;
     scanf("%d",& n);
     printf("%d ",n);
     m=n-5;
     print(n,m);
	return 0;
}