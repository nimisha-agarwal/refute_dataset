/*compile-errors:e158_278287.c:6:10: warning: equality comparison result unused [-Wunused-comparison]
    for(i==2;i<num;i=i+1)
        ~^~~
e158_278287.c:6:10: note: use '=' to turn this equality comparison into an assignment
    for(i==2;i<num;i=i+1)
         ^~
         =
e158_278287.c:6:9: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    for(i==2;i<num;i=i+1)
        ^
e158_278287.c:5:10: note: initialize the variable 'i' to silence this warning
    int i;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
  
    int i;
    for(i==2;i<num;i=i+1)
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
    return 0;
}
