/*compile-errors:e158_278300.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
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
for (i=1; i<=num/2; i++)
{if (num%i!=0)
continue;
else 
return 0; }

    
}


int main(){
    
int N,p;

scanf ("%d",&N);
p=N+1;
if (check_prime(N)==0)

while (p>N)
{if (check_prime(p)!=0)
printf ("%d",p);
else 
p=p+1;
}

    return 0;
}