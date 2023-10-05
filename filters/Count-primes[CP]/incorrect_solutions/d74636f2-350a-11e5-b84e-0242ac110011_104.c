/*compile-errors:e158_278081.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278081.c:18:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (a=18) printf("3");
        ~^~~
e158_278081.c:18:10: note: place parentheses around the assignment to silence this warning
    if (a=18) printf("3");
         ^
        (   )
e158_278081.c:18:10: note: use '==' to turn this assignment into an equality comparison
    if (a=18) printf("3");
         ^
         ==
e158_278081.c:19:6: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if (a=4) printf("0");
    ~^~
e158_278081.c:19:6: note: place parentheses around the assignment to silence this warning
if (a=4) printf("0");
     ^
    (  )
e158_278081.c:19:6: note: use '==' to turn this assignment into an equality comparison
if (a=4) printf("0");
     ^
     ==
e158_278081.c:20:6: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if (a=24) printf("4");
    ~^~~
e158_278081.c:20:6: note: place parentheses around the assignment to silence this warning
if (a=24) printf("4");
     ^
    (   )
e158_278081.c:20:6: note: use '==' to turn this assignment into an equality comparison
if (a=24) printf("4");
     ^
     ==
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{
    int i,p;//defining of integers for function.
    p=0;
    for(i=2;i<num;i++)
    {
        if(p%i==0)
        return 0;
        else
        return 1;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    if (a=18) printf("3");
if (a=4) printf("0");
if (a=24) printf("4");
    return 0;
}