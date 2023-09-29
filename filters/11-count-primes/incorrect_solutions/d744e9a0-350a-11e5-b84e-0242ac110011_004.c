/*execute-result:AT*/
/*compile-errors:e158_278024.c:6:9: warning: unused variable 'b' [-Wunused-variable]
  int a,b,p,i;
        ^
e158_278024.c:11:15: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
       if(num%i==0)
              ^
e158_278024.c:6:14: note: initialize the variable 'i' to silence this warning
  int a,b,p,i;
             ^
              = 0
e158_278024.c:33:28: warning: variable 'p2' is uninitialized when used here [-Wuninitialized]
             b=check_prime(p2);
                           ^~
e158_278024.c:27:16: note: initialize the variable 'p2' to silence this warning
    int n,p1,p2,a,b,c;
               ^
                = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
  int a,b,p,i;
  a=1;
  p=0;
  for (a=1;a<num;a++)
   {
       if(num%i==0)
       {
          break;
       }
       else
       {
           p=1;
       }
   }
   return p;
}



int main()
{
    int n,p1,p2,a,b,c;
    p1=2;
      scanf("%d",&n);
        for(p1=2;p1<=(n-2);p1++)
        { 
             a=check_prime(p1);
             b=check_prime(p2);
             if((a=1)&&(b=1))
             {
               c=c+1;
              }
              else
              {
                  break;
              }
        }
    return c;
}