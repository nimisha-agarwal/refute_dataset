/*compile-errors:e158_278349.c:12:1: warning: control reaches end of non-void function [-Wreturn-type]
} 
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a;
  for(a=2;a<=num-1;a++)
 { if(num!=1&&num%a!=0)
  break;
  else if(num!=1&&num%a==0)
  num=num+1;continue;
 }
 
} 

int main(){
    int num,b;
    scanf("%d",&num);
b=check_prime(num);
printf("%d",num);
 
    return 0;
}