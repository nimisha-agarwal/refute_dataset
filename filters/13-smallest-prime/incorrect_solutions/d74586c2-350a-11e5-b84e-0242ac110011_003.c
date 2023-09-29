/*execute-result:OK*/
/*compile-errors:e158_278311.c:30:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
char furthercheck(int num);

//Complete function definitions

int main()
{
    int input=0;
    scanf("%d",&input);
    printf("%d",check_prime(input));
    return 0;
}

int check_prime(int num)
{
    while(num>2)
    {
        if(num%6==1||num%6==5)//above 2 all prime numbers are of form 
                              //6k+1 or 6k-1
            {
                if(furthercheck(num)=='y')
                    return num;
            }
        num++;
    }
    if(num==2||num==1)
        return num;
}

char furthercheck(int num)
{
    int i;
    for(i=num-1;i>1;i--)
    {
        if(num%i==0)
                return 'n';
    }
    return 'y';
}