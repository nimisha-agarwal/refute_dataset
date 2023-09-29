/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){ //prime number is an number who can devide only 1 and itself;
  int i; //i is a  integer;
  for (i=2;i<=num-1;i=i+1){ //for loop apply;
    if (num%i==0) //condition;
    return 0;
    }    return 1;
}
int main(){
int N,i; //N,i is a  integer;
int count=0;
scanf("%d %d",&N,&i); //value defined;
for (i=3;i<=N-2;i=i+1){ //for loop apply;
    if(check_prime (i)==1&&check_prime (i+2)==1) //condition for check_prime;
    count++; //count for prime number;
}
    printf("%d",count); //print for prime number;
    
    return 0;
}