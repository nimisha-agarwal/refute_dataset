/*compile-errors:e158_278272.c:8:22: warning: if statement has empty body [-Wempty-body]
      else if(i==num);
                     ^
e158_278272.c:8:22: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
for(int i=2;i<=num ;i++)
   {
      if(num%i==0)break;
      else if(i==num);
      return num;
         
   }
   for(int j=num;;j++)
        for(int k=2;k<=j;k++)
      {    
          if(j%k==0)break;
          else 
          return j;
      }
}

int main()
{
    int n;
    scanf("%d",&n);
    check_prime(n);
    printf("%d",n);
    return 0;
}