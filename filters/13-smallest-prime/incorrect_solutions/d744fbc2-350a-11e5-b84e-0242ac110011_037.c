/*execute-result:OK*/
/*compile-errors:e158_278287.c:11:13: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
      if(num=1){
         ~~~^~
e158_278287.c:11:13: note: place parentheses around the assignment to silence this warning
      if(num=1){
            ^
         (    )
e158_278287.c:11:13: note: use '==' to turn this assignment into an equality comparison
      if(num=1){
            ^
            ==
1 warning generated.*/
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
      if(num=1){
          printf("2");
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
