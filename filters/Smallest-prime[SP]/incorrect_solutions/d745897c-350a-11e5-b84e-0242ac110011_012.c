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
    
    //Write your code here
    
    return 0;
}