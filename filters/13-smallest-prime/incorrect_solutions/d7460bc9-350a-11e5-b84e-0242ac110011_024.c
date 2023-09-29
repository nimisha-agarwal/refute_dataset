/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{int a;
 for(a=2;a<=num/2;a++)
 {if(num%a==0)
  return 1;
  else
  return 0;
 }
 return 100;
} 

int main(){
    int N,c,p;
    scanf("%d",&N);
    for(p=N;p<=N*2;p++)
    {c=check_prime(p);
     if(c==0)
     break;
     else
     if(c==100)
     printf("%d",2);
    }
    printf("%d",p);
    return 0;
}