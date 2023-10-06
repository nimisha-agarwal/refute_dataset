/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int i;
int check_prime(int n);
int main(){
    int num;
    scanf("%d",&num);
    check_prime(num);
    printf("%d",i);
    return 0;
}
int check_prime(int num)
{
    int i=num,j,count=0;
    while(i>=num)
    {
        for(j=1;j<=num;j++)
        {
            if(num%j==0)
                count++;
        }
        if(count==2)
            break;
        i++;
    }
    return i;
}
