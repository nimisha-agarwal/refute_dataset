/*compile-errors:e158_278313.c:7:11: warning: implicitly declaring library function 'sqrt' with type 'double (double)'
    int a=sqrt(num);
          ^
e158_278313.c:7:11: note: please include the header <math.h> or explicitly provide a declaration for 'sqrt'
e158_278313.c:15:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

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
}
//Complete function definitions

int main(){
    
    //Write your code here
    
    return 0;
}