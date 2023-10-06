/*execute-result:OK*/
/*compile-errors:e158_278300.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i;
    if (num==1)
    return 0;
    if (num==2)
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
 
p=p+1;
}
}
if (check_prime(N)==1)
printf ("%d",N);

    return 0;
}