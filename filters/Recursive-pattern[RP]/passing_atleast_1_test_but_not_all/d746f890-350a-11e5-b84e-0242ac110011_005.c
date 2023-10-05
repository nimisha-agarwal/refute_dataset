/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void print(int n,int m,int flag)
{ 
    printf("%d ",m);
    if(n==m)
    return ;
    else if(m>0 && flag==0)
    {
        flag=((m-5)<=0)?1:0;
        print(n,m-5,flag);
    }
    else if(flag)
    {
        print(n,m+5,1);
    }
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