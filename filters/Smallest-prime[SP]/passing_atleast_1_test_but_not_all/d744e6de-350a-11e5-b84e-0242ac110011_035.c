/*compile-errors:e158_278281.c:17:18: warning: unused variable 'prime' [-Wunused-variable]
    int num,p,p1,prime;
                 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num) //function to calculate prime
{
    for(int i=2;i<(num/2);i++)
    {
        if(num%i==0)//loop to check if number is divisible
        {
            return 1;//if number is not prime return 1
        }
     
    }
 return num;//if number is prime return number
}

int main(){
    int num,p,p1,prime;
    scanf("%d",&num);
    p=check_prime(num);
    if(p==1)
    {
        for(int i=num+1;i<(num+10);i++)
            {
                p1= check_prime(i);
                if(p1==1)
                    {
                        continue; 
                    }    
                else{
                        printf("%d",i);
                        break;
                    }
           
            }
    }
    else
        {
            int p2=check_prime(num);
            printf("%d",p2);     
         
        }
    

}