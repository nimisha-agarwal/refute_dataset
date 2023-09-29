/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    
    int num,z;
    scanf("%d",&num);
    z= check_prime(num);
    printf("%d",z);
    

    
    
    return 0;
}