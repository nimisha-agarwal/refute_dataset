/*execute-result:OK*/
/*compile-errors:e158_278047.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i,c=0;
for (i=1;i<=num;i++)
   {
    if(num%i==0)
      {
        c++;
       }if(c==2)
    {
        return 1;
    }else{
        return 0;
         }
    }
}

 

int main()
{
    int i,s,n,k=0,c=0;
    scanf("%d", &n);
    for(i=2;i<=n-2;i++)
    {
        k=check_prime(i);
        if (k==1)
        {
            s=check_prime(i+2);
            if (s==2)
            {
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
}