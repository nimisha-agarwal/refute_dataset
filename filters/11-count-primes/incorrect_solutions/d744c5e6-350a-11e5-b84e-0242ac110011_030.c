/*execute-result:OK*/
/*compile-errors:e158_278019.c:19:3: warning: control may reach end of non-void function [-Wreturn-type]
  }
  ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int x,y;
    for(x=2;x<num;x=x+1)
    {
        y=num%x;
    if (y!=0)
    {
        return num;
    }
    else
    {
        return 0;
       }
    }
    
  }
  
int main(){
    int N;/*giving a value N*/
    int a,i,count,b;
    count=0;
    scanf ("%d",&N);
    for (i=2;i<=N;i=i+1)
    {
        a=check_prime(i);
        b=check_prime(i+2);
        if (a==i&&b==i+2)
        {
            count=count+1;
        }
    }
    printf ("%d",count);
    return 0;
}