/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
   {
       int p;
       int count=0;
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
    
       return p;
   }

int main()
{
    int N;
    scanf("%d",&N);
    int P;
    P=check_prime(N);
    printf("%d",P);
    return 0;
}