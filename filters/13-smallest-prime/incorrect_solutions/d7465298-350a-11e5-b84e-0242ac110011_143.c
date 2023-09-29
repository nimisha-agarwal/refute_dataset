/*compile-errors:e158_278349.c:8:13: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
 else if(num=1&&num%a==0)
         ~~~^~~~~~~~~~~~
e158_278349.c:8:13: note: place parentheses around the assignment to silence this warning
 else if(num=1&&num%a==0)
            ^
         (              )
e158_278349.c:8:13: note: use '==' to turn this assignment into an equality comparison
 else if(num=1&&num%a==0)
            ^
            ==
e158_278349.c:12:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{ int a;
  for(a=2;a<=num-1;a++)
  {if (num!=1&&num%a!=0)
    return num;
 else if(num=1&&num%a==0)
 return 2;
}
    
}
int main(){
    int num,b ;
    scanf("%d",&num);
    b= check_prime(num);
    printf("%d",b);
    return 0;
}