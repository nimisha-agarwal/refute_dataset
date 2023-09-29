/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i,a;
a=0;
for(i=2;i<num;i++)
{
    if(num%i==0)
    {
    a=a+1;
    }
}
if(a>0)
{
    return 1;
}
else
{
    return 0;
}
}
//Complete function definitions

int main(){
    int num=7;
    printf("%d",check_prime(num));
}
    
    
    //Write your code here
    

