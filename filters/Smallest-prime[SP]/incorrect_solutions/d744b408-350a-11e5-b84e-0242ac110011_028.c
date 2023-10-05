/*execute-result:OK*/
/*compile-errors:e158_278272.c:22:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
for(int i=2;i<num ;i++)
   {
      if(num%i==0)break;
      
     else
      return num;
         
   }
   for(int j=num+1;j<=num+10000;j++)
     {   
         for(int k=1;k<=j;k++)
         {    
              if(j%k==0)break;
              else 
              return j;
         }
     }
}
int main()
{
    int n;
    scanf("%d",&n);
    int r=check_prime(n);
    printf("%d",r);
    return 0;
}