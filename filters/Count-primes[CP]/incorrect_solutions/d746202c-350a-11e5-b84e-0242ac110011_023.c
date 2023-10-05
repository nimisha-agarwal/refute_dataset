/*execute-result:TL*/
/*compile-errors:e158_278076.c:16:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e158_278076.c:16:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e158_278076.c:14:10: note: initialize the variable 'N' to silence this warning
    int N,p,count;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
     {int i;
       for(i=2;i<num;i++)
         {if(num%i==0)
            break;
          else 
            return 1;
         }
       return 0;
     }
int main(){
    int N,p,count;
    count=0;
    scanf("%d",N);
    for(p=2;p<=N-2;p++)
       {if (check_prime(p)+check_prime(p+2)==2)
          count++;
        else 
           continue;
       }
    printf("%d",count);
    return 0;
}