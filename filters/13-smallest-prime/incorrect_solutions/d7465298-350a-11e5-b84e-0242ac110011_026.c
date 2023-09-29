/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a;
  for(a=2;a<=num-1;a++)
  {if (num%a!=0)
    return num;
   else if(num%a==0)
    continue;
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