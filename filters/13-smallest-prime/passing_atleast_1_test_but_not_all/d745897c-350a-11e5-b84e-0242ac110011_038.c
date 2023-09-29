/*compile-errors:e158_278313.c:22:18: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
        if (prime=num)
            ~~~~~^~~~
e158_278313.c:22:18: note: place parentheses around the assignment to silence this warning
        if (prime=num)
                 ^
            (        )
e158_278313.c:22:18: note: use '==' to turn this assignment into an equality comparison
        if (prime=num)
                 ^
                 ==
e158_278313.c:29:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num);
int check_prime(int num)
{
    int i;
    int prime;
    while(1)
    {
        int a=sqrt(num);
        for(i=2;i<=a;i++)
        {
            if (num/i==0)
            {
                prime=0;
                break;
            }
            else
            prime=num;
        }
        if (prime=num)
        break;
        else
        num++;
    }
    if (prime!=0)
    return 1;
}
//Complete function definitions

int main(){
    int N;
    scanf("%d",&N);
    if (N==1)
    N++;
    while(1)
    {
        if (check_prime(N)==1)
        {
            printf("%d",N);
            break;
        }
        N++;
    }
    
    //Write your code here
    
    return 0;
}