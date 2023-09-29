/*execute-result:OK*/
/*compile-errors:e158_278031.c:3:15: warning: unused parameter 'num' [-Wunused-parameter]
int check(int num)
              ^
e158_278031.c:26:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
e158_278031.c:8:17: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        while(i<N)
                ^
e158_278031.c:7:14: note: initialize the variable 'N' to silence this warning
        int N;
             ^
              = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check(int num)
    {
        int i=2;
        int a;
        int N;
        while(i<N)
        {
            a=N%i;
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
    p1=0;int i=0;
    while (i<=N-2)
    {
        p2=p1+2;
        a=a+(check(p1)==0&&check(p2)==0);
        i++;
    }
    return 0;
}