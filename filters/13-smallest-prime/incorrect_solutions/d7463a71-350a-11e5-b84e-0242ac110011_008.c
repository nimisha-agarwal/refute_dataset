/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    i=0;
    j=1;
        for(i=2;i<=num;i++)
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
       {if(N==1)
       printf("2");}
   }
   printf("%d",p);
   return 0;
}