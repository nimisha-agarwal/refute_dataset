/*compile-errors:e158_278289.c:5:9: warning: expression result unused [-Wunused-value]
    for(num;num<2;num++)
        ^~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    for(num;num<2;num++)
    {
        
    }
        for (int i=2;i<num;i++) 
        { 
            if(num%i==0)
            {
                num=num+1;
            }
          
        }
        return(num);
}

int main()
{
    int num;
    scanf("%d",&num);
    int c=check_prime (num);
    printf("%d",c);
    
    return 0;
}