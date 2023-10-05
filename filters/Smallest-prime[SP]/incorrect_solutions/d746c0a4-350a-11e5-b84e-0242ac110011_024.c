/*execute-result:OK*/
/*compile-errors:e158_278360.c:21:1: warning: control may reach end of non-void function [-Wreturn-type]
}    
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int count;
        for(count=1; count<num; count++)
            {
                if(num%count==0)
                    {
                        break;
                    }
                if(num==count)
                    {
                        return 1;
                    }
                else
                    {
                        return 0;
                    }
            }
}    

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b = check_prime(a);
    if(b==1)
        {
            printf("%d",a);
        }
    else
        {
            for(c=a;c>=a;c++)
                {
                    d=check_prime(c);
                    if(d==1)
                        {
                            printf("%d",c);
                        }
                }
        }
    
    return 0;
}