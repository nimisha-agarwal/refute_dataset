#include <stdio.h>
int viper(int b)
{
    printf("%d ",b);
    if(b<0)
        return b;

    b=b-5;
    viper(b);
}
int mountain(int n,int b)
{
    b=b+5;
    printf("%d ",b);
    if(b==n)
        return;

    mountain(n,b);
}
int main(){
    int n,b;
    scanf("%d",&n);
    b=viper(n);
    mountain(n,b);
    return 0;
}