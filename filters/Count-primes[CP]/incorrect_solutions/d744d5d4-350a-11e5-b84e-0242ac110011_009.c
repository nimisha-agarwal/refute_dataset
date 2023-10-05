/*compile-errors:e158_278022.c:7:11: warning: unused variable 'b' [-Wunused-variable]
    int a,b,c;
          ^
e158_278022.c:7:13: warning: unused variable 'c' [-Wunused-variable]
    int a,b,c;
            ^
e158_278022.c:17:9: warning: expression result unused [-Wunused-value]
    for(num; num>0;num--)
        ^~~
e158_278022.c:21:8: warning: variable 'd' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
    if(i>sqrt(num))
       ^~~~~~~~~~~
e158_278022.c:23:14: note: uninitialized use occurs here
      return d;
             ^
e158_278022.c:21:5: note: remove the 'if' if its condition is always true
    if(i>sqrt(num))
    ^~~~~~~~~~~~~~~
e158_278022.c:16:12: note: initialize the variable 'd' to silence this warning
    int i,d;
           ^
            = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num);
int main()
{
    
    int a,b,c;
    scanf("%d",&a);
    check_prime(a);
    int d=check_prime(a);
    printf("%d,%d",d,d-2);
    return 0;
}
int check_prime(int num)
{
    int i,d;
    for(num; num>0;num--)
    for(i=2;i<=sqrt(num);i++)
    if(num%i==0)
       break;
    if(i>sqrt(num))
      d=num;
      return d;
    
}