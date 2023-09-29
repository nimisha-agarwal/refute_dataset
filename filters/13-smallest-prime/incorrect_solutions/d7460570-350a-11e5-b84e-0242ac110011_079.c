/*execute-result:OK*/
/*compile-errors:e158_278328.c:17:2: warning: control may reach end of non-void function [-Wreturn-type]
}}
 ^
e158_278328.c:7:11: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    for(m=i;m>=i;m=m+1){
          ^
e158_278328.c:6:10: note: initialize the variable 'i' to silence this warning
    int i,m;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int a;
    int i,m;
    for(m=i;m>=i;m=m+1){
    for(i=num;i>=num;i=i+1)
    {
        for(a=2;a<i;a=a+1){
            if((i%a)==0)
            break;
            else
            return m;
        }
    }
}}

int main(){
    int n,k;
    scanf("%d",&n);
    k=check_prime(n);
    printf("%d",k);
    
    return 0;
}