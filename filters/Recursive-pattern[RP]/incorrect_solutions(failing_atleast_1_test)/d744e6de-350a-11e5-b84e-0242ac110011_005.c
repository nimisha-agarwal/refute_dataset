/*compile-errors:sh: 1: exec: clang: not found*/
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
    
    scanf("%d",&m);
    n=m;
    printf("%d",m);
    recur(m-5);
	return 0;
}