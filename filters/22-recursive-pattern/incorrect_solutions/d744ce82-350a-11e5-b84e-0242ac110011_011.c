/*compile-errors:e175_305970.c:23:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(l=!0)
       ~^~~
e175_305970.c:23:9: note: place parentheses around the assignment to silence this warning
    if(l=!0)
        ^
       (   )
e175_305970.c:23:9: note: use '==' to turn this assignment into an equality comparison
    if(l=!0)
        ^
        ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pat(int i,int j,int k)
{
    if(i>j)
    return;
    printf("%d ",i);
    if(k!=0)
    return pat(i-5,j,k-1);
    if(k==0)
    return pat(i+5,j,k);
    
}

int main(){
    int i;
    scanf ("%d",&i);
    int j=i;
    int k=(i/5);
    int l=(i%5);
    if(l==0)
    pat(i,j,k+2);
    if(l=!0)
    pat(i,j,k+1);
	return 0;
}