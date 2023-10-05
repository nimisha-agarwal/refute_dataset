/*compile-errors:e158_278269.c:14:17: warning: variable 'count' is uninitialized when used here [-Wuninitialized]
                count++;
                ^~~~~
e158_278269.c:6:17: note: initialize the variable 'count' to silence this warning
       int count;
                ^
                 = 0
e158_278269.c:29:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278269.c:29:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278269.c:28:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
   {
       int p;
       int count;
       for(p=num;p>=num;p++)
       {
           int b;
           for(b=1;b<=p;b++)
           {
              if(p%b==0)
              {
                count++;
              }
           }
           if(count==1||count==2)
           {
               break;
           }
       }
       int t=p;
       return t;
   }

int main()
{
    int N;
    scanf("%d",N);
    int P;
    P=check_prime(N);
    printf("%d",P);
    return 0;
}