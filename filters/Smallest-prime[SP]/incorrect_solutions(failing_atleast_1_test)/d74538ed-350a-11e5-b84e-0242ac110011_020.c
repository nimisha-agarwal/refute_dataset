/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

//Complete function definitions

    int j;
      for(j=1;j<num;j=j+1)
      {
    if(num%j==0)
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
    return 0;
    }