/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i,a;
a=0;
for(i=2;i<=num-1;i=i+1){
if(num%i==0)
a=a+1;}
if(a==0)
return 1;//Complete function definitions
else{
    return 0;
}
}
int main(){
    int i,n,a=0;
    i=0;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+1){
   if(check_prime(i)==1&&check_prime(i+2)==1)
   a++;
    }
    printf("%d",a);//Write your code here
  
    return 0;
}