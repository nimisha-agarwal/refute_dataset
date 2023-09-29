/*compile-errors:e175_305973.c:30:7: warning: variable 'm' is uninitialized when used here [-Wuninitialized]
    n=m;
      ^
e175_305973.c:29:10: note: initialize the variable 'm' to silence this warning
    int m;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void recur(int m)
{
    if(n==m)
    {
        printf("%d",n);
        return ;
    }
    else if(m>0)
    {
        printf("%d",m);
        m=m-5;
        recur(m);
    }
    else if(m<0)
    {
        printf("%d",m);
        m=m+5;
        for(int i=0;i<(n-m)/5;i++)
        {
            recur(m);
        }
    }

}

int main(){
    int m;
    n=m;
    scanf("%d",&m);
    printf("%d",m);
    recur(m-5);
	return 0;
}