/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void mountain(int,int);
void viper(int n,int b)
{ 
    printf("%d ",b);
    if(b<=0)
    {
    mountain(n,b);
    return;
    }
    b=b-5;
    viper(n,b);
}
void mountain(int n,int b)
{
    if(b==n)
    return;
    b=b+5;
    printf("%d ",b);
    mountain(n,b);
}
int main(){
    int n,c;
    scanf("%d",&n);
    viper(n,n);
    printf("\n%d",c);
    
	return 0;
}