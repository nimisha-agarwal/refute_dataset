/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int n);
int main(){
    int num,ans;
    scanf("%d",&num);
    ans=check_prime(num);
    printf("%d",ans);
    return 0;
}
int check_prime(int num)
{
    int i=num,j,count=0;
    while(i<(num+5))
    {
        for(j=2;j<i;j++)
        {
            if(j%i==0)
                count++;
        }
        if(count==0)
            break;
        i++;
    }
    return i;
}