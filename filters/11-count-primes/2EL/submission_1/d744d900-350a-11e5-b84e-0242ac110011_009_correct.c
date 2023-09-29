/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)/*function to decide whther the number is prime or not*/
{
int i;
    for(i=2;i<=num-1;i++){
        if (num%i==0){/*if number is not prime it returns value 0*/
            return 0;
        }
        else continue;
    }
    return 1;/*reutn 1 for prime number*/
}
int main(){
    int n,i;
    scanf("%d",&n);
    int count=0;
    for(i=2;i<=(n-2);i++){
        if ((check_prime(i))&&(check_prime(i+2))==1){/*if both are prime then add 1 to the counter variable(count*/
            count++;
        }
        else continue;
    }
    printf("%d",count);
    return 0;
}