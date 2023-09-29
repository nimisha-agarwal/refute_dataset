/*compile-errors:e158_278346.c:6:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
for(i=2;i=num-1;i++) 
        ~^~~~~~
e158_278346.c:6:10: note: place parentheses around the assignment to silence this warning
for(i=2;i=num-1;i++) 
         ^
        (      )
e158_278346.c:6:10: note: use '==' to turn this assignment into an equality comparison
for(i=2;i=num-1;i++) 
         ^
         ==
e158_278346.c:14:11: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    int p=N;
          ^
e158_278346.c:13:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)

   {int i ;
for(i=2;i=num-1;i++) 
 {if (num%i==0) 
      return 0 ;
    }
 return 1;
 }
int main(){
    int N;
    int p=N;
    {if (check_prime(N)) 
    p=p+1;
    }
    printf("%d",p);
    
    return 0;
}