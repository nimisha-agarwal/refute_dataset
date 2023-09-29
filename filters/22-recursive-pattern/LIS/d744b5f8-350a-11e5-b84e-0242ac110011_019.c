/*compile-errors:e175_305966.c:24:19: warning: equality comparison result unused [-Wunused-comparison]
    if(n-5>0) flag==1;
              ~~~~^~~
e175_305966.c:24:19: note: use '=' to turn this equality comparison into an assignment
    if(n-5>0) flag==1;
                  ^~
                  =
e175_305966.c:24:15: warning: variable 'flag' is uninitialized when used here [-Wuninitialized]
    if(n-5>0) flag==1;
              ^~~~
e175_305966.c:21:15: note: initialize the variable 'flag' to silence this warning
    int n,flag;
              ^
               = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void func(int n,int k,int flag)
{
    if(n==k) return;
    
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
    printf("%d ",n);
    if(n-5>0) flag==1;
    else flag=0;
    func(n-5,n,flag);
    printf("%d",n);
	return 0;
}