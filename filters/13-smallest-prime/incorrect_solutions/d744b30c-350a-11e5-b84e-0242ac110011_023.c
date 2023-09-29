/*execute-result:OK*/
/*compile-errors:*/
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
   a=check_prime(n);{
        break;
    }
    {
    continue;
}
}
    printf("%d",x);
   return 0;
}