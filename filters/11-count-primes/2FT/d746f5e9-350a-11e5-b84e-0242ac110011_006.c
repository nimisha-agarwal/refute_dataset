/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ 
    int i;
    for (i=2;i<num;i++)
    {if (num%i==0)
        return 0;
    }
    return 1;
}    

int main(){
    int N;
    int count=0;
    int i;
    int p1,p2;
    scanf("%d",&N);
    for(i=3;i<=N-1;i++)
    {
    
        p1=check_prime(i);
        p2=check_prime(i+2);
        if(p1==1&&p2==1)
        count++;
        
    }
    
    printf ("%d",count);
    return 0;
}