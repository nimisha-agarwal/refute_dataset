/*execute-result:OK*/
/*compile-errors:e158_278076.c:13:6: warning: control may reach end of non-void function [-Wreturn-type]
     }
     ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
     {int i;
       for(i=2;i<num;i++)
         {if(num%i==0)
           { return 0;
            break;}
          else 
            return 1;
         }
       
     }
int main(){
    int N,p,count;
    count=0;
    scanf("%d",&N);
    for(p=1;p<=N-2;p++)
       {if (check_prime(p)+check_prime(p+2)==2)
          count++;
       }
    printf("%d",count);
    return 0;
}