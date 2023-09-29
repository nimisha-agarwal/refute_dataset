/*execute-result:OK*/
/*compile-errors:e158_278278.c:12:1: warning: control reaches end of non-void function [-Wreturn-type]
}  
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int j=2;
    while (j<=num-1)
    {
        if (num%j==0)
        break;
        j=j+1;
    }
}  
int main(){
    
    int N,i;
    scanf ("%d",&N);
    i=N;
    while (i>=N)
    {
        check_prime (i);
        
        break;
        i=i+1;
    }
    return 0;
}