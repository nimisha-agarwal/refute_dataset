/*execute-result:OK*/
/*compile-errors:e158_278024.c:8:9: warning: unused variable 'b' [-Wunused-variable]
  int a,b,p,i;
        ^
e158_278024.c:13:15: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
       if(num%i==0)
              ^
e158_278024.c:8:14: note: initialize the variable 'i' to silence this warning
  int a,b,p,i;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);


int check_prime(int num)
{
  int a,b,p,i;
  a=1;
  p=0;
  for (a=2;a<num;a++)
   {
       if(num%i==0)
       {
          return 0;
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
    c=0;
      scanf("%d",&n);
        for(p1=2;p1<=(n-2);p1++)
        { 
             p2=p1+2;
             a=check_prime(p1);
             b=check_prime(p2);
             if((a==1)&&(b==1))
             {
               c=c+1;
              }
              //else
              //{
            //      break;
              //}
        }
        printf("%d",c);
    return 0;
}