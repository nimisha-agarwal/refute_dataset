/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
  
    int i;
    for(i=2;i<num;i=i+1)
    {
      if(num%i==0)
      return 0;
    }
    
      return num;
}
    
        
int main(){
    int num;
    scanf("%d",&num);
    while(!check_prime(num))
    num=num+1;
    printf("%d",num);
    if(num==1)
    return 2;
    else return 0;
}