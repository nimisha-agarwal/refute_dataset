/*compile-errors:e158_278329.c:10:17: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    printf("%d",N);
                ^
e158_278329.c:9:10: note: initialize the variable 'N' to silence this warning
    int N,i,p;
         ^
          = 0
e158_278329.c:13:7: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
    i=p;
      ^
e158_278329.c:9:14: note: initialize the variable 'p' to silence this warning
    int N,i,p;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main()
{
    int N,i,p;
    printf("%d",N);
    scanf("%d",&N);
    
    i=p;
    while (i>=N)
    {
          if(N%i==0)
          {
               printf("%d",N);
               break;
          }
     
          i++;
    }
    
    if(i==N)
    printf("%d",N);
    

    
    
    //Write your code here
    
    return 0;
}