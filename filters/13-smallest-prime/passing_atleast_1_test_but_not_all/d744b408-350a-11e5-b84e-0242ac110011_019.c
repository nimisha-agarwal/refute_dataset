/*execute-result:OK*/
/*compile-errors:e158_278272.c:17:24: warning: if statement has empty body [-Wempty-body]
          else if(j==k);
                       ^
e158_278272.c:17:24: note: put the semicolon on a separate line to silence this warning
e158_278272.c:20:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
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
   for(int j=num+1;j<=num+100;j++)
        for(int k=2;k<=j;k++)
      {    
          if(j%k==0)break;
          else if(j==k);
          return j;
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