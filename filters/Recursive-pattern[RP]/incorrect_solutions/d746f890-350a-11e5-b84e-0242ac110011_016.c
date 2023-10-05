/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void print(n,m,flag)
{ 
    printf("%d ",m);
    if(n==m)
    return;
    else if(m>0)
    {
     print(n,m-5,1);
    }
    else if(flag)
    print(n,m+5,1);
}
int main()
{
     int n,m;
     scanf("%d",& n);
     printf("%d ",n);
     m=n-5;
     print(n,m,0);
	return 0;
}