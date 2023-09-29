/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int viper(int b)
{ 
    printf("%d ",b);
    if(b<=0)
    {
    printf("\n'a'%d",b);
    return b;
    }
    b=b-5;
    viper(b);
}
int mountain(int n,int b)
{
    if(b==n)
    return 0;
    b=b+5;
    printf("%d ",b);
    mountain(n,b);
}
int main(){
    int n,c;
    scanf("%d",&n);
    c=viper(n);
    printf("\n%d",c);
    mountain(n,c);
	return 0;
}