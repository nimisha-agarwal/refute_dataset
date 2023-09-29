/*compile-errors:e158_278300.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278300.c:21:5: warning: variable 'p' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
if (check_prime(N)==0)
    ^~~~~~~~~~~~~~~~~
e158_278300.c:23:8: note: uninitialized use occurs here
while (p>N)
       ^
e158_278300.c:21:1: note: remove the 'if' if its condition is always true
if (check_prime(N)==0)
^~~~~~~~~~~~~~~~~~~~~~
e158_278300.c:19:8: note: initialize the variable 'p' to silence this warning
int N,p;
       ^
        = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i;
for (i=1; i<=num/2; i++)
{if (num%i!=0)
continue;
else 
return 0; }

    
}


int main(){
    
int N,p;
scanf ("%d",&N);
if (check_prime(N)==0)
p= N+1;
while (p>N)
{if (check_prime(p)!=0)
printf ("%d",p);
else 
p=p+1;
}

    return 0;
}