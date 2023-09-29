/*execute-result:TL*/
/*compile-errors:e158_278054.c:15:2: warning: control may reach end of non-void function [-Wreturn-type]
}}
 ^
e158_278054.c:23:23: warning: more '%' conversions than data arguments [-Wformat]
    printf("{%d,%d},{%d,%d}",p1,p2);
                     ~^
e158_278054.c:21:7: warning: variable 'p1' is uninitialized when used here [-Wuninitialized]
    i=p1;
      ^~
e158_278054.c:17:13: note: initialize the variable 'p1' to silence this warning
    int i,p1,p2,n;
            ^
             = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i,a;
a=0;
for(i=2;i<=num;i=i+1){
if(num%i==0)
a=a+1;
if(a==0)
return 1;//Complete function definitions
else{
    return 0;
}
}}
int main(){
    int i,p1,p2,n;
    i=0;
    scanf("%d",&n);
    for(check_prime(i);i<=n;i=i+1){//Write your code here
    i=p1;
    p2=p1+2;
    printf("{%d,%d},{%d,%d}",p1,p2);
    }
    return 0;
}