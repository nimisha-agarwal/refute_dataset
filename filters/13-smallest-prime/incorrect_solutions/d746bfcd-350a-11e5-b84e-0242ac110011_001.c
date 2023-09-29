/*compile-errors:e158_278359.c:21:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
     
       int i;
       
       
       for(i=2;i<num;i++){
           if(num%i==0){
          num++;
           i=2;
           }
          else { 
           continue;
          }
           }
           
           
       
       printf("%d",num);
}

 int main() {
   
   int N;
   scanf("%d",&N);
   check_prime(N);
    
    
    
    
    return 0;
}