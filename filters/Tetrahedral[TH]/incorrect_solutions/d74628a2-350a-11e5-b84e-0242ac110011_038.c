/*compile-errors:e158_277958.c:5:15: warning: unused variable 'k' [-Wunused-variable]
    int i,j,n,k,p;
              ^
e158_277958.c:5:17: warning: unused variable 'p' [-Wunused-variable]
    int i,j,n,k,p;
                ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int i,j,n,k,p;
    
    scanf("%d",&n);
    for(j=1;j<=n ;j++)
    {
        for(i=1;i<=j;i++)
        {
            j=i+j;
        }   
    }printf("%d",j);//
    return 0;
}

