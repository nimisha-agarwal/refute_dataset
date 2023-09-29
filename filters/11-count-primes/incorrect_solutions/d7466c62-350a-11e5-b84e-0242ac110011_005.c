/*compile-errors:e158_278091.c:24:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
e158_278091.c:24:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    scanf("%d",n);
               ^
e158_278091.c:22:10: note: initialize the variable 'n' to silence this warning
    int n,a;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions
int check_prime(int num)
{
    int a, pr=1;
    for(a=2;a<=(num/2);a++)
    {
        if(num%a==0)
        {
            pr=0;
            break;
        }
    }
    return ((pr==0)?0:1);
}
int main(){
    
    //Write your code here
    int n,a;
    int count=0;
    scanf("%d",n);
    for(a=2;a<=n-2;a++)
    {
        if((check_prime(a)==1)&&(check_prime(a+2)==1))
        {
          count++;
        }
    }
    return 0;
}