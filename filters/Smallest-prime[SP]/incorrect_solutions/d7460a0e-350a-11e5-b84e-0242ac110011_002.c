/*execute-result:OK*/
/*compile-errors:e158_278330.c:43:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main()
{
    int N,p;
    int result=1;
    scanf("%d",&N);
    
    for(int i=N;result!=0;i++)
    {
        result=check_prime(i);
        if (result==0)
        {
            p=i;
        }
    }
    printf("%d",p);
    return 0;
}


int check_prime(int num)
{
    int ch=0;
    for (int i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            ch=1;
            return 1;
            break;
        }
    }
    if(ch==0)
    {
        return 0;
    }
    
}