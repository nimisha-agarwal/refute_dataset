/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)

   {int i ;
for(i=2;i<=num-1;i++) 
 {if (num%i==0) 
      return 0 ;
    }
 return 1;
 }
int main(){
    int N;
    scanf("%d",&N);
    int p=N;
    {if (check_prime(N)) 
    p=p+1;
    }
    printf("%d",p);
    
    return 0;
}