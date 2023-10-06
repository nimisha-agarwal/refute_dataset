/*compile-errors:e158_278026.c:19:16: warning: format specifies type 'int' but the argument has type 'int (*)(int)' [-Wformat]
  printf("%d", check_prime);
          ~~   ^~~~~~~~~~~
1 warning generated.*/
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
    
  check_prime(97);
  printf("%d", check_prime);
    
    return 0;
}