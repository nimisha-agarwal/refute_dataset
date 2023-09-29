/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{
    int k=0;
    for(int l=1;l<=num;l++)
    {
        if ((num%l)==0)
        k++;
    }
    if(k==2)
{
  return 1;
}
else
{
return 0;
}
    
}

int main()
{
    int n,x,y,i;
    int j=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
    x=check_prime(i);
    y=check_prime(i+2);
    if((x==1)&&(y==1)&&((i+2)<n))
    {
        j++;
    }
    printf("%d",j);
}
   
    
    
    
    
   
    
    return 0;
}