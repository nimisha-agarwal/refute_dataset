/*execute-result:TL*/
/*compile-errors:e175_306055.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306055.c:25:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int pattern2(int n,int k)
{
    if(n<=k)
    {
        printf("%d",n);
        pattern2(n+5,k);
    }
    
    else
    return 0;
}

int pattern(int n,int k)
{
    if(n<=0)     
    {
        printf("%d",n); n+=5;
        pattern2(n,k);
    }
    else
    printf("%d ",n);
    pattern(n-5,k);
}


int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    pattern(n,k);
	return 0;
}