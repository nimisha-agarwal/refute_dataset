/*compile-errors:e158_278325.c:3:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num)
                    ^
e158_278325.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278325.c:7:15: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
   for(i=2;i<=N-1;i++)
              ^
e158_278325.c:5:9: note: initialize the variable 'N' to silence this warning
   int N;
        ^
         = 0
e158_278325.c:24:17: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
    printf("%d",&p);
            ~~  ^~
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
   int N;
   int i;
   for(i=2;i<=N-1;i++)
   {
       if(N%i==0)
       {
           break;
       }
   }
   if(i==N)
   return N;
}

int main(){
    
    int N;
    int p;
    scanf("%d",&N);
    p=check_prime(N);
    printf("%d",&p);
    
    return 0;
}