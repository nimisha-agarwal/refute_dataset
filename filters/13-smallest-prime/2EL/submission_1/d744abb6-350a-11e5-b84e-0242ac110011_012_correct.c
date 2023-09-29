/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
   {
       int p;
       
       for(p=num;p>=num;p++)
       {
           int count=0;
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
       if(t==1)
       return t+1;
       else
       return t;
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