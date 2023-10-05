/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pat(int i)
{
    printf("%d ",i);
    if(i>0)
    return pat(i-5);
    //if(i<0)
    
}

int main(){
    int i;
    scanf ("%d",&i);
    //int k=(n/5);
    
    pat(i);
	return 0;
}