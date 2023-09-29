/*compile-errors:e175_305964.c:8:21: warning: implicit declaration of function 'change2' is invalid in C99 [-Wimplicit-function-declaration]
                  j=change2(n);
                    ^
e175_305964.c:32:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h> 
int k,n;
void change(int l)
{   int j;
    int n=l;
        if(n<=0)
            {
                  j=change2(n);
                  printf("%d",j );
                  return;
            }
        else 
            {
                printf("%d",n );
                 n=n-5;
                change(n);
            }
}   
int change2(int l)
{   
    if (l==n)
    {   printf("%d ",l );
        return l ;
        
    }
    else
    {
        printf("%d ",l);
        l=l+5;
        change2(l);
    }
}

int main()
{
    scanf("%d ",&n);
    change(n);
	return 0;
}