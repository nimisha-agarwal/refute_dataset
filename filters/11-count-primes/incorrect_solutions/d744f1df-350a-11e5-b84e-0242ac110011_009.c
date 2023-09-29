/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int count=0;
    int i=2;
    while(i<num)
    {count=count+(num%i==0);
        i=i+1;
    }
    if(count==0)
    {return 1;}
    return 0;
}

int main(){
    int a;
  a=check_prime(97);
  printf("%d", a);
    
    return 0;
}