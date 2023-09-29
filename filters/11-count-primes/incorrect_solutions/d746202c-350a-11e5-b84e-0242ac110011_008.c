/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
     {int i;
       for(i=2;i<num;i++)
         {if(num%i==0)
           { 
            break;}
         }
            return 1;
         
       
     }
int main(){
    int N,p,count;
    count=0;
    scanf("%d",&N);
    for(p=2;p<=N-2;p++)
       {if (check_prime(p)+check_prime(p+2)==2)
          count++;
       }
    printf("%d",count);
    return 0;
}