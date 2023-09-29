/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);               // function declaration

int check_prime(int num)
{
    int i,ch=1;                         //declaring variables(ch->flag)
    for (i=2;i<=num/2;i++)              //loop for all factors between 
    {                                   // 2 to num/2
        if ( (num % i) == 0 )           // checking divisibility
        {
            ch=0;                       //composite number (flag)
            break;                      // break the loop
        }
    }
    if (ch==0 || num==1)                // returning composite (inc. 1)
        return 0;
    else                                // returning prime
        return 1;
}

int main(){
    
    int N,p;                            // declaring variables
    scanf("%d",&N);                     // input N  
    p=N;                                // initialising p  
    while( 1 )                          // infinite loop checking for p
    {
        if( check_prime(p) == 1)
        {
            printf("%d",p);
            break;
        }
        p++;
    }
    return 0;
}