/*compile-errors:e158_278280.c:17:11: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
    while(j>=N)
          ^
e158_278280.c:15:14: note: initialize the variable 'j' to silence this warning
    int N,p,j;
             ^
              = 0
1 warning generated.*/
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
    
    int N,p,j;
    scanf("%d",&N);
    while(j>=N)
         {p=check_prime(j);
          if(p!=0)
            {break;}
          j++;
         }
    printf("%d",p);     
    return 0;
}