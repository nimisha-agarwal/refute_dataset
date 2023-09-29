/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    while(1)
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                return (num);
                break;
            }
            num=num+1;
        }
    }
}
//Complete function definitions

int main()
{
    int num;
    scanf("%d",&num);
    int c=check_prime (num);
    printf("%d",c);
    //Write your code here
    
    return 0;
}