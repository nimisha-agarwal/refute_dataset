/*compile-errors:e158_278315.c:7:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int i;
int check_prime(int num){
    for(i=2;i<=num-1;i=i+1)
    {if(num%i!=0)
    {printf("%d",num);}}
}

int main()
{
    int N,a;
scanf("%d",&N);
for(a=N;a>=N;a=a+1)
{if (check_prime(a))
break;}

    
    return 0;
}