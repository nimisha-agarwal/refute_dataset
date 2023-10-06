/*execute-result:TL*/
/*compile-errors:e158_278315.c:9:36: warning: control reaches end of non-void function [-Wreturn-type]
                 printf("%d",num);}}
                                   ^
e158_278315.c:14:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278315.c:14:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278315.c:13:10: note: initialize the variable 'N' to silence this warning
    int N,a;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int i;
int check_prime(int num){
                 i=2;
                 for(i=2;i<=num-1;i++)
                 {if (num%i==0)
                 continue;
                 else
                 printf("%d",num);}}

int main()
{
    int N,a;
    scanf("%d",N);
    for (a=N;a>=N;a=a+1)
    check_prime(a);
    printf("%d",a);
    
   
    
    return 0;
}