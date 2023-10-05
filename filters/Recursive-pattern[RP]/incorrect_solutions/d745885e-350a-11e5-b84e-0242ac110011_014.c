/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int m;

void pattern(int n,int indicator)
{
    printf("%d",n);
    if(n==m && indicator ==0)
    {
        return;
    }
    if(indicator ==1)
    {
        if(n>5)
        pattern(n-5,1);
        else
        {
            pattern(n-5,0);
        }
    }
    else if(indicator ==0)
    {
        pattern(n+5,0);
    }
}

int main()
{
    scanf("%d",&m);
    if(m==0)
    {
        printf("%d",0);
        return 0;
    }
    pattern(m,1);
}