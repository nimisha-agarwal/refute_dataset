/*execute-result:OK*/
/*compile-errors:e158_278071.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int p=0,i;
for(i=2;i<num;i++)
{
if(num%i==0)
{
    p=1;
    break;
}
}
if(p==0)
return num;
if(p==1)
return num*2;
}
//Complete function definitions

int main(){
    
    //Write your code here
    int n,i=3,c=0;
    scanf("%d",&n);
    while(i<n)
    {
    if((check_prime(i)==i)&&(check_prime(i+2)==(i+2)))
    {
        c=c+1;
    }
    i=i+1;
    }
    printf("%d",c);
    return 0;
  }