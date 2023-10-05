/*compile-errors:e158_278349.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
} 
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a;
  for(a=2;a<=num-1;a++)
  {if (num!=1&&num%a!=0)
  return num;
  else if(num!=1&&num%a==0)
  num=num+1; break;
  }
  for (a=2;a<=num-1;a++)
  return num;
  
} 

int main(){
    int num,b ;
    scanf("%d",&num);
    b= check_prime(num);
    printf("%d",b);
    return 0;
}