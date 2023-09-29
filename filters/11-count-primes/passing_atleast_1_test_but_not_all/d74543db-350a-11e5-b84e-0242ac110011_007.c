/*execute-result:TL*/
/*compile-errors:e158_278031.c:25:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check(int num)
    {
        int i=2;
        int a;
        while(i<num)
        {
            a=num%i;
            if (a==0)
            {
                return 1;
                break;
            }
            else
            {
                continue;
            }
            i++;
        }
        if (a!=0)
        {
            return 0;
        }
    }
int main()
{
    int N,p1,p2,a;
    a=0;
    scanf("%d",&N);
    p1=2;
    while (p1<=N-2)
    {
        p2=p1+2;
        a=a+((check(p1)==0)&&(check(p2)==0));
        p1++;
    }
    printf("%d",a);
    return 0;
}