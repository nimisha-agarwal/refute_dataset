/*compile-errors:e158_278349.c:17:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
  if(num= check_prime(num))
     ~~~^~~~~~~~~~~~~~~~~~
e158_278349.c:17:9: note: place parentheses around the assignment to silence this warning
  if(num= check_prime(num))
        ^
     (                    )
e158_278349.c:17:9: note: use '==' to turn this assignment into an equality comparison
  if(num= check_prime(num))
        ^
        ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a;
  for(a=2;a<=num-1;a++)
 { if(num!=1&&num%a!=0)
  break;
  if(num!=1&&num%a==0)
  return 1;
 }
 return num;
} 

int main(){
    int num;
    scanf("%d",&num);
  if(num= check_prime(num))
  ;
    printf("%d",num);
    return 0;
}