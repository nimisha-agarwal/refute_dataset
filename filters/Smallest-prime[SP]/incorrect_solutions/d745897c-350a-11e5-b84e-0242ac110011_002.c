/*execute-result:TL*/
/*compile-errors:*/
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