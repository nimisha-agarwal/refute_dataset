/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int prime=0;
int check_prime(int num);
int check_prime(int num)
{
    int i;
    int a=sqrt(num);
    for(i=2;i<=a;i++)
    {
        if (num/i==0)
        {
            prime=0;
            continue;
        }
        else
        prime=num;
    }
    
    return prime;
}
//Complete function definitions

int main(){
    int N;
    scanf("%d",&N);
    if (N==1)
    N++;
    while(1)
    {
        check_prime(N);
        if (prime!=0)
        {
            printf("%d",N);
            break;
        }
        else
        N++;
    }
    
    //Write your code here
    
    return 0;
}