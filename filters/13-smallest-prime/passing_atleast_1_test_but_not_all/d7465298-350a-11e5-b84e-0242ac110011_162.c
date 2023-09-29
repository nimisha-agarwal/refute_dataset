/*execute-result:OK*/
/*compile-errors:e158_278349.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278349.c:14:13: warning: unused variable 'a' [-Wunused-variable]
    int num,a,b ;
            ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a;
  for(a=2;a<=num;a++)
  {if(num%a!=0)
   return num;
   else
   break;
  }
}

int main(){
    int num,a,b ;
    scanf("%d",&num);
    b= check_prime(num);
    printf("%d",b);
    return 0;
}