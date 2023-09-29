/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num) /* function declaratoin*/

   {int i ;
for(i=2;i<=num-1;i++) 
 {if (num%i==0) 
      return 1 ;
    }
 return 0;
 }
int main(){
    int N;   
    scanf("%d",&N);
  int p;  
    for (p=N;;p++)
   {
    if (!check_prime(p)) 
    break;
    } 
    
    printf("%d",p);
    
    return 0;
}