/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int i,j,ctr;
ctr=0;
for(i=num;;i++)
{for(j=2;j<num;j++)
    {if(i%j==0) ctr++;
        
    }if (ctr==0) break;
}
return i;
}

int main(){
    
int n,p;
scanf("%d",&n);
p=check_prime(n);
printf("%d",p);
    return 0;
}