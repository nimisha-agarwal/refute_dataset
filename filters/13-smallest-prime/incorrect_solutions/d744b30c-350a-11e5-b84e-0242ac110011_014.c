/*execute-result:TL*/
/*compile-errors:e158_278271.c:19:9: warning: unused variable 'a' [-Wunused-variable]
    int a = check_prime(n);
        ^
e158_278271.c:15:8: warning: unused variable 'a' [-Wunused-variable]
 int n,a,x;
       ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){//Complete function definitions
  int i;
  for(i=2;i<num;i++){
      if(num%i!=0)
      continue;
      else 
      return 0;
 }    
      return num;
}     
int main(){
    
 int n,a,x;
  scanf("%d",&n);
  for(x=n;x>=n;x++) //Write your code here
{
    int a = check_prime(n);
    
}    
    return 0;
}