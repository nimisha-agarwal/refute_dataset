/*compile-errors:e158_278039.c:5:12: warning: if statement has empty body [-Wempty-body]
    if(n+2);
           ^
e158_278039.c:5:12: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int n);
int check_prime(int n)
{
    if(n+2);
    return n;
}
int main(){
    int i,n,num;
    scanf("%d",&n);
    num=0;
    for(i=0;i<=n;i=i+2){
       num=num+1;  
    }
    printf("%d",num);
    return 0;
}