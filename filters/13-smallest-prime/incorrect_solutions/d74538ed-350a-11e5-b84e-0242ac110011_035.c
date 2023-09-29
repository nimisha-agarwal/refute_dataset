/*execute-result:OK*/
/*compile-errors:e158_278293.c:24:13: warning: unused variable 'i' [-Wunused-variable]
        int i=1;
            ^
e158_278293.c:26:11: warning: variable 'z' is uninitialized when used here [-Wuninitialized]
        z=z+1;
          ^
e158_278293.c:25:14: note: initialize the variable 'z' to silence this warning
        int z;
             ^
              = 0
2 warnings generated.*/
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
    
              
    
        int i=1;
        int z;
        z=z+1;
        printf("%d",z);
        return 0;
               }