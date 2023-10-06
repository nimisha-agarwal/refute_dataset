/*compile-errors:e158_278343.c:5:13: warning: unused variable 'a' [-Wunused-variable]
    int i,j,a;
            ^
e158_278343.c:7:17: warning: variable 'j' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
        for(i=2;i>=num;i++)
                ^~~~~~
e158_278343.c:15:16: note: uninitialized use occurs here
        return j;    
               ^
e158_278343.c:7:17: note: remove the condition if it is always true
        for(i=2;i>=num;i++)
                ^~~~~~
e158_278343.c:5:12: note: initialize the variable 'j' to silence this warning
    int i,j,a;
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j,a;
    i=0;
        for(i=2;i>=num;i++)
        {
            if((num%i==0))
            {
                j=0;
                break;
            }
            }
        return j;    
}
int main(){
   int a,p,N;
   scanf("%d",&N);
   a=0;
   for(a=2;a>=N;a++)
   {
       p=check_prime(a);
   }
   printf("%d",p);
   return 0;
}