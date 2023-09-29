/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int count=0;
    int i=2;
    while(i<num)
    {count=count+(num%i==0);
        i=i+1;
    }
    if(count==0)
    {return 1;}
    return 0;
}

int main(){
    int N;
    scanf("%d",&N);
    int p1=0;
    int count=0;
    int p2=p1+2;
    while(p2<=N)
    {
    int a=((check_prime(p1)) + (check_prime(p2)));
    if (a==2)
    {count=count+1;}
    p1=p1+1;
    p2=p1+2;
    }
    printf("%d",count);
    
    return 0;
}