/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void func(int n,int k,int flag)
{
    if(n==k && flag==0) return;
    
    printf("%d ",n);
    
    if(flag==1)  n-=5;
    
    else if(flag==0)  n+=5;
    
    if(n<=0)
    flag=0;
    
    func(n,k,flag);
}


int main(){
    int n,flag;
    scanf("%d",&n);
    
    
    flag=1;
    
    func(n-5,n,flag);
    printf("%d",n);
	return 0;
}