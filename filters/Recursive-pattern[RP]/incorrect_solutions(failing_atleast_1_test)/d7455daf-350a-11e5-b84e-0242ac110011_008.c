/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pat(int n)
{

    if(n<=0)
    return;
        printf("%d ",n);

    pat(n-5);
    printf("%d",n-5);
    
}

int main()
{int n;
scanf("%d",&n);
if(n==0)
printf("0");
else
pat(n);
return 0;
}