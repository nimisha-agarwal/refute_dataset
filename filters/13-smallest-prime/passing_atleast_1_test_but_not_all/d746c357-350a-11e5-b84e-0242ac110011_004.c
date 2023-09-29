/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int count=0;
int i;
for(i=2;i<num;i++)
{
    if(num%i==0)
    {
     count=count+1;
    }
}    
    if(count==0)
      return 1;
    else 
      return 0;
}
int main(){
    int N;
    int i;
    scanf("%d",&N);
    for(i=N;i<=2*N;i++)
    {
        if(check_prime(i)==1)
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}