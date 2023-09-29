/*execute-result:OK*/
/*compile-errors:e175_306052.c:5:8: warning: variable 'num' is uninitialized when used here [-Wuninitialized]
    if(num<=0) return;
       ^~~
e175_306052.c:4:12: note: initialize the variable 'num' to silence this warning
    int num;
           ^
            = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void permute(int n)
{
    int num;
    if(num<=0) return;
    num=n-5;
    printf("%d ",num);
    permute(num);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    permute(n);
	return 0;
}