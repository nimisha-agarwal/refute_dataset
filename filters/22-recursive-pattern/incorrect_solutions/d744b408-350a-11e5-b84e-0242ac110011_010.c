/*compile-errors:sh: 1: exec: clang: not found*/
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
void change2(int l)
{   
    if (l==n)
    {   printf("%d",l);
        return ;
        
    }
    else
    {
        printf("%d",l);
        l=l+5;
        change2(l);
    }
}

int main()
{
    scanf("%d",&n);
    change(n);
	return 0;
}