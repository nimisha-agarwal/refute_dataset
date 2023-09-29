/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int cnt=0;
    for(int i=1;i<=num;i++)
      {
            if(num%i==0)
            cnt++;
      }
            if (cnt==2)
            return 1;
            return 0;
}


int main()
{
    int n;
    scanf("%d",&n);
    for (int j=n;j<=n+100;++j)
    {
        int r=check_prime(j);
        if (r==1)
        printf("%d",r);
        break;
    }
    
   
    return 0;
}