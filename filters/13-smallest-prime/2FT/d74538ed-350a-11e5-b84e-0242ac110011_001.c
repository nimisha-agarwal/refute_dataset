/*compile-errors:e158_278293.c:28:16: warning: control reaches end of non-void function [-Wreturn-type]
               }
               ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

//Complete function definitions

    int j;
      for(j=2;j<num;j=j+1)
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
    int one(){
        int i=1;
        int z;
        z=i+1;
        printf("%d",z);
               }
              
    
        