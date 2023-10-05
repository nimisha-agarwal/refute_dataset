/*execute-result:OK*/
/*compile-errors:e158_278038.c:9:14: warning: variable 'p1' is uninitialized when used here [-Wuninitialized]
    while(i<=p1-1&&i<=p2-1) 
             ^~
e158_278038.c:6:11: note: initialize the variable 'p1' to silence this warning
    int p1,p2,N,i;  
          ^
           = 0
e158_278038.c:9:23: warning: variable 'p2' is uninitialized when used here [-Wuninitialized]
    while(i<=p1-1&&i<=p2-1) 
                      ^~
e158_278038.c:6:14: note: initialize the variable 'p2' to silence this warning
    int p1,p2,N,i;  
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int main(){ 
    int p1,p2,N,i;  
    scanf("%d",&N); 
    i=2; 
    while(i<=p1-1&&i<=p2-1) 
    { 
      if(p1%i==0&&p2%i==0) 
      {  
        printf("not a prime number"); 
        break; 
      }
    i=i+1; 
}
    if(i==p1&&i==p2) 
       printf("prime number");  
       printf("%d%d",p1,p2);
    //Write your code here
    
    return 0;
}