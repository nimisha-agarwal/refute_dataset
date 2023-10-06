/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

  int check_prime(int num){
      int i;//i is a variable
   for (i=2; i<num-1; i=i+1){  
    if (num%i==0)//condition
return 0;}
  return 1;}
  
//Complete function definitions

int main(){
    int n,i;// n,i is a  integer
    int count=0;
    scanf("%d %d",&n,&i);
    for (i=3; i<n-2; i=i+1){//for loop apply
  if(check_prime(i)==1&&check_prime(i+2)==1)
  count++;
    } printf("%d",count);//print for prime number

    
    //Write your code here
    
    return 0;
}