/*compile-errors:*/
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
    //int l=(i%5);
    //if(l==0)
    pat(i,j,k+1);
    //if(i=!0)
    //pat(i,j,k+2);
	return 0;
}