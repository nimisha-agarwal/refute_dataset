/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   
    int prime=0,j=0,flag; 
    for(prime=num;prime>=num;prime++)//loop actually never terminates
                                     //until it finds a prime no.
    {   
        for(j=2;j<prime/2;j++)
        {
            flag=1;             //flag is used later to check  
                                //whether no. is prime or not
            if(prime%j==0)
            {
                flag=0;     //turn flag to 0 indicating
                break;      //variable 'prime' is not prime
            }
        }
        if(flag==0)
            continue;
        if((flag==1)&&(prime>1))  //if variable 'prime' is prime
            return prime;         //(i.e. flag=1) return it.
                                  //if num=1 then flag remains 1
                                  //therefore the condition prime>1
                                  //is checked before returning
              
    }
    return -1;              //control never reaches here but
                            //this statement is written just
                            //to avoid compiler warning
                            //"control may reach end of 
                            //non-void function"
}                           

int main()
{
    int N=0,p=0;            //p is the variable to store the req. no. 
    scanf("%d",&N);
    p=check_prime(N);
    printf("%d",p);
    return 0;
}