/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
        for (int i=2;i<num;i++) 
        { 
          if(num>=2)
          {
            if(num%i==0)
            {
                num=num+1;
            }
          }
          else
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
    //Write your code here
    
    return 0;
}