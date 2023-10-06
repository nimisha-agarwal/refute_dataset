/*compile-errors:e158_278300.c:7:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (num=1)
        ~~~^~
e158_278300.c:7:12: note: place parentheses around the assignment to silence this warning
    if (num=1)
           ^
        (    )
e158_278300.c:7:12: note: use '==' to turn this assignment into an equality comparison
    if (num=1)
           ^
           ==
e158_278300.c:9:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (num=2)
        ~~~^~
e158_278300.c:9:12: note: place parentheses around the assignment to silence this warning
    if (num=2)
           ^
        (    )
e158_278300.c:9:12: note: use '==' to turn this assignment into an equality comparison
    if (num=2)
           ^
           ==
e158_278300.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i;
    if (num=1)
    return 0;
    if (num=2)
    return 1;
for (i=2; i<=num/2; i++)
{if (num%i==0)
{return 0;
break ;}
else 
return 1; }

    
}


int main(){
    
int N,p;

scanf ("%d",&N);
p=N+1;
if (check_prime(N)==0)
{


while (p>N)
{
    if (check_prime(p)==1)
{printf ("%d",p);
break;}
else 
p=p+1;
}
}
if (check_prime(N)==1)
printf ("%d",N);

    return 0;
}