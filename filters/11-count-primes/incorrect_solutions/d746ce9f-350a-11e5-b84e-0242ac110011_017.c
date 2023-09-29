/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int cprime(int num)
{
   if(num==2)
   {
       return 1;
   }
   else
   {
   int count;
   for(count=2;count<num;count++)
   {
       if(num%count==0)
       return 0;
   }
   return 1;
   }
}
int main()
{
    int n,i,c1,c2,c3=0;
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
        c1=cprime(i);
        if(c1==1)
        {
            c2=cprime(i+2);
            if(c2==1)
            {
                c3=c3+1;
            }
        }
    }
       
    printf("%d",c3);
    return 0;
}