/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pat(int i,int j)
{
    if(i<j)
    printf("%d ",i);
    if(i>0)
    return pat(i-5,j);
    //if(i<0)
    
}

int main(){
    int i;
    scanf ("%d",&i);
    int j=i;
    //int k=(n/5);
    
    pat(i,j);
	return 0;
}