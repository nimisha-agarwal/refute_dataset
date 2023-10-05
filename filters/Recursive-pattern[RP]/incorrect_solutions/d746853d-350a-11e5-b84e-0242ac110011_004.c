/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void output();
int main(){int n;
scanf("%d",&n);
output(n,1,n);

	return 0;
}
void output(int i,int j,int k )
{

if(j==1)
{
    if(k>0){printf("%d",k);output(i,j,k-5);}
    else{printf("%d",k);j=0;output(i,j,k+5);}
}
if(j==0){if(k<i){printf(" %d ",k+5);output(i,j,k+5);}}
}