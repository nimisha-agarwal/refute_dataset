/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
    {int i;
    for (i=2;i<=num/2;i++)
        {if(num%i==0)
            {return 0;
             break;            
            }
        }
        return num;
    }
int main(){
    
    int N,p;
    scanf("%d",&N);
    int j=N;
    while(j>=N)
         {p=check_prime(j);
          if(p!=0)
            {break;}
          j++;
         }
    printf("%d",p);     
    return 0;
}