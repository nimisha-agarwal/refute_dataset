/*compile-errors:*/
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
    int num,p,p1;
    scanf("%d",&num);
    p=check_prime(num);//calling function with argument num
    if(p==1)
    {
        for(int i=num+1;i<(num+10);i++)/*loop to further check prime no greater than the input no.*/
            {
                p1= check_prime(i);
                if(p1==1)
                    {
                        continue; /*to check for the no greater than the given no*/
                    }    
                else{
                        printf("%d",i);
                        break;
                    }
           
            }
    }
    else/*if the given no is prime */
        {
            int p2=check_prime(num);
            printf("%d",p2);     
         
        }
    

}