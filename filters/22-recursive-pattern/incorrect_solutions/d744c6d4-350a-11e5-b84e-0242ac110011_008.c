/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int viper(int b)
{
    printf("%d ",b);
    b=b-5;
    if(b<0)
    return b;
    viper(b);
}
int mountain(int n,int b)
{
    b=b+5;
    printf("%d ",b);
    if(b==n)
    return 0;
    mountain(n,b);
}
int main(){
    int n,b;
    scanf("%d",&n);
    b=viper(n);
    mountain(n,b);
	return 0;
}