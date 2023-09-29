/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void func(int n,int k,int flag)
{
    if(n==k) return;
    
    printf("%d ",n);
    
    if(flag==1)  n=n-5;
    
    else if(flag==0)  n=n+5;
    
    if(n<=0)
    flag=0;
    
    func(n,k,flag);
}


int main(){
    int n,flag=1;
    scanf("%d",&n);
    printf("%d ",n);
    func(n-5,n,flag);
    printf("%d",n);
	return 0;
}