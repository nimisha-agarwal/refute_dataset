/*execute-result:OK*/
/*compile-errors:e158_278080.c:7:18: warning: expression result unused [-Wunused-value]
    for(i=2,n=2;i<sqrt(n),n<=num;i=i+1,n=n+1)
                ~^~~~~~~~
e158_278080.c:14:7: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
    p=p+1;
      ^
e158_278080.c:6:14: note: initialize the variable 'p' to silence this warning
    int i,n,p;
             ^
              = 0
e158_278080.c:19:11: warning: unused variable 'a' [-Wunused-variable]
    int N,a=0;
          ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num)
{
    int i,n,p;
    for(i=2,n=2;i<sqrt(n),n<=num;i=i+1,n=n+1)
    {
        if((n%i)==0)
        {
            return 1;
        }
    }
    p=p+1;
    return p;
}
int main()
{
    int N,a=0;
    scanf("%d",&N);
    int P=check_prime(N);
    printf ("%d",P);
    return 0;
}