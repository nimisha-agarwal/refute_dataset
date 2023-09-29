/*compile-errors:sh: 1: exec: clang: not found*/
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
   int m=change(n);
	return 0;
}