/*execute-result:OK*/
/*compile-errors:e175_305964.c:9:20: warning: implicit declaration of function 'change2' is invalid in C99 [-Wimplicit-function-declaration]
                 j=change2(n);
                   ^
e175_305964.c:35:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h> 
int k,n;
void change(int l)
{   int j;
    int n;
     n=l;
        if(n<=0)
            {
                 j=change2(n);
                  printf("%d",j);
                  return;
            }
        else 
            {
                printf("%d",n);
                 n=n-5;
                change(n);
            }
}   
int change2(int m)
{
    int n2;
    n2=m;
    if (m==n)
    {
        return m;
        
    }
    else
    {
        printf("%d",n2);
        n2=n+5;
        change2(n2);
    }
}

int main()
{
    scanf("%d",&n);
    change(n);
	return 0;
}