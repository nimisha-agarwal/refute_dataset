/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int);

int check_prime(int num)
{   int i, flag=0;
    for(i = 2; i < num; i++)
    { if(num%i == 0)
      flag = 0;
      else 
      flag++;
    }
    return flag;
}
int main()
{   int n,i,count=0;
    scanf("%d", &n);
    for(i=2;i<n;i++)
    {  if((check_prime(i)) && (check_prime(i+2)))
       count++;
    }
    printf("%d",count);
    return 0;
}