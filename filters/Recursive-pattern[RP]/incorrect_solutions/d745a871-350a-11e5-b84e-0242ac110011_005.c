/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void fn2(int n,int org)
{
    printf("%d",n);
    if(n<org)
    {
        n=n+5;
    }
    fn2(n,org);
    else return;
}

void fn1(int n,int org)
{  
    printf("%d",n);
    if(n-5>=-4)
    {
      n=n-5;

    }
    else
    {
        fn2(n,org);
        return;
    }
    fn1(n,org);
}

int main(){
    int n;
    scanf("%d",&n);
    fn1(n,n);
	return 0;
}