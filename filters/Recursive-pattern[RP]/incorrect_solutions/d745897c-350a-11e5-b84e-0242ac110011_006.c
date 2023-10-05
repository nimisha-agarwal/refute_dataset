/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int n;
//fuction to subtract 5
int dec(int a)
{
    if (a>0)
    {
        printf("%d ",a);
        return dec(a-5);
    }
    if(a<=0)
    return inc(a);
}

//function to add 5
int inc(int a)
{
    
    if(a<n)
    {printf("%d ",a);
    return inc(a+5);}
}

int main(){
	scanf("%d",&n);
	dec(n);
	return 0;
}