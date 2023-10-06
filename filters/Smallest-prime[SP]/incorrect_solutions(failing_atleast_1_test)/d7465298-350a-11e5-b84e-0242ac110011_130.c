/*compile-errors:e158_278349.c:4:9: warning: unused variable 'b' [-Wunused-variable]
{ int a,b;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a,b;
  for(a=2;a<=num-1;a++)
  {if (num%a!=0)
    return num;
   else if(num%a==0)
    break;
  }
 return num;
}

int main(){
    int num,b ;
    scanf("%d",&num);
    b= check_prime(num);
    printf("%d",b);
    return 0;
}