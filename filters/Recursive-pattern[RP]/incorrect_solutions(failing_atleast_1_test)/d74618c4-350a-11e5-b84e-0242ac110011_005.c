/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    temp=n-5;
    int pat(int n){
        if (temp>0)
        {
             printf("%d",n-5);
        }
    if (temp==n)
    {
        printf("%d",n);
    }
    else if (temp<=0)
    {
        printf("%d",n+5);
    }
}
	return 0;
}