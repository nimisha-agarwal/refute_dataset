/*compile-errors:e158_278300.c:21:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278300.c:15:5: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
if (j==1)
    ^
e158_278300.c:6:12: note: initialize the variable 'j' to silence this warning
    int i,j;
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i,j;
    if (num==1)
    return 0;
    if (num==2)
    return 1;
for (i=2; i<=num/2; i++)
{if (num%i==0)
{ j=1;
break ;}
if (j==1)
return 0;
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
 
p=p+1;
}
}
if (check_prime(N)==1)
printf ("%d",N);

    return 0;
}