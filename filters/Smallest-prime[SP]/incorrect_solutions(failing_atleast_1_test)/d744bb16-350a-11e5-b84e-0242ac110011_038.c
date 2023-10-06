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
    printf("%d",num);
    int i=num,j,count=0;
    while(i<(num+4))
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0)
            break;
        i++;
    }
    return i;
}
