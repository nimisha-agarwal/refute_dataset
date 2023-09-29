/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,m;
    for (i=2;i<num;i++){
   // int m;    
    m = num%i;
    if (m==0){
        ;break;}
        }return num;}
        
int main() {
    int N,p1,count;
    count = 0;p1=0;
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