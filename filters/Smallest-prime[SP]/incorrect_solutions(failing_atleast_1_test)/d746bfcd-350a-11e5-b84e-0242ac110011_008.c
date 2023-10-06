/*execute-result:OK*/
/*compile-errors:e158_278359.c:6:15: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
       if (num=1){
           ~~~^~
e158_278359.c:6:15: note: place parentheses around the assignment to silence this warning
       if (num=1){
              ^
           (    )
e158_278359.c:6:15: note: use '==' to turn this assignment into an equality comparison
       if (num=1){
              ^
              ==
e158_278359.c:24:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
     
       int i;
       if (num=1){
           printf("%d",num);
       }
       else{
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
}
       
 int main() {
   
   int N;
   scanf("%d",&N);
   check_prime(N);
    
    
    
    
    return 0;
}