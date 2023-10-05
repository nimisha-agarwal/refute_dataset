/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
  int i;
  for (i=2;i<=num-1;i=i+1){
    if (num%i==0)
    return 0;
    }    return 1;
}
int main(){
int N,i;
int count=0;
scanf("%d %d",&N,&i);
for (i=3;i<=N-2;i=i+1){
    if(check_prime (i)==1&&check_prime (i+2)==1)
    count++;
}
    printf("%d",count);

    //Write your code here
    
    return 0;
}