/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   
    int prime=0,j=0,flag=1; //flag is used later to check  
                            //whether no. is prime or not
    for(prime=num;;prime++)//loop actually never terminates
                                     //until it finds a prime no.
    {   for(j=2;j<prime/2;j++)
        {
            if(prime%j==0)
            {
                flag=0;     //turn flag to 0 indicating
                            //variable 'prime' is not prime
                break;
            }
        }
        if(flag==1)         //if variable 'prime' is prime(i.e. flag=1)
            return prime;   //return it
    }
    return -1;              //control never reaches here but
                            //this statement is written just
                            //to avoid compiler warning
                            //"control may reach end of 
                            //non-void function"
}                           

int main()
{
    int N=0,p=0;            //p is the variable to stor the req. no. 
    scanf("%d",&N);
    p=check_prime(N);
    printf("%d",p);
    return 0;
}