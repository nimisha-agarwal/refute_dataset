/*execute-result:OK*/
/*compile-errors:e158_278059.c:10:10: warning: control may reach end of non-void function [-Wreturn-type]
        }}
         ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,m;
    for (i=1;i<=num;i++){
   // int m;    
    m = num%i;
    if (m==0){
        return num;break;}
        }}
        
int main() {
    int N,p1,count;
    count = 0;p1=1;
    scanf("%d",&N);
    while(p1<=N)
{
 if (check_prime(p1)==p1)
{
 if (check_prime(p1+2)==p1+2){ count = count +1;}    
}
 p1=p1+1;
}
 printf("%d",count);
    return 0;
}