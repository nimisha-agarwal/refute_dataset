/*compile-errors:e158_278059.c:21:11: warning: variable 'p2' is uninitialized when used here [-Wuninitialized]
    while(p2<=N)
          ^~
e158_278059.c:18:22: note: initialize the variable 'p2' to silence this warning
    int N,p1,count,p2;
                     ^
                      = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,m;
    for (i=2;i<num;i++)
    {
        // int m;    
        m = num%i;
        if (m==0)
            return 1;
    } 
    return 2;
    
}
        
int main() {
    int N,p1,count,p2;
    count = 0;p1=3;
    scanf("%d",&N);
    while(p2<=N)
{
 if (check_prime(p1)==2)
{
 if (check_prime(p1+2)==2){ count = count +1;}    
}
 p1=p1+1;
}
 printf("%d",count);
    return 0;
}