/*compile-errors:e158_278313.c:7:9: warning: unused variable 'prime' [-Wunused-variable]
    int prime,i;
        ^
e158_278313.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
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
    int prime,i;
    int a=sqrt(num);
    for(i=2;i<=a;i++)
    {
        if (num%i==0)
        continue;
        else
        return 1;
    }
}
//Complete function definitions

int main(){
    int N;
    scanf("%d",&N);
    if (N==1)
    N++;
    while(1)
    {
        if (check_prime(N))
        {
            printf("%d",N);
            break;
        }
        N++;
    }
    
    //Write your code here
    
    return 0;
}