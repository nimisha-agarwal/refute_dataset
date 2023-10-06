/*compile-errors:e158_278352.c:16:2: warning: control reaches end of non-void function [-Wreturn-type]
 }
 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int a,num,count,j;
int check_prime(int num)
 {for(a=2;a<num;a++)
    {
        if(num%a!=0)
        {
            count=0;
        }
        else
        {
            count=1;
        }
        
    }
 }

int main(){
    
    scanf("%d",&num);
    if(count==0)
    {
        printf("%d",num);
    }
    if(count==1)
    {
      for(j=num;j>=num;j++)
      {
          if(count==0)
          {
              printf("%d",j);
              break;
          }
          else
          {
              break;
          }
      }
    }
    return 0;
}