/*compile-errors:e158_278278.c:21:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (N=1)
        ~^~
e158_278278.c:21:10: note: place parentheses around the assignment to silence this warning
    if (N=1)
         ^
        (  )
e158_278278.c:21:10: note: use '==' to turn this assignment into an equality comparison
    if (N=1)
         ^
         ==
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
        return 0;
        j=j+1;
    }    
    
    return 1;
    
}  
int main(){
    
    int N,i;
    scanf ("%d",&N);
    i=N;
    if (N=1)
    printf ("2");
    
    else
    while (i>=N)
    {
        if (check_prime(i))
        break;
        i=i+1;
    }
    printf ("%d",i);

    return 0;
}
/*int main(){
    int num;
    scanf ("%d",&num);
    int j=2;
    while (j<=num-1)
    {
        if (num%j!=0)
        printf ("no is prime");
        break;
        j=j+1;
    }
}*/