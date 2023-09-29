/*execute-result:OK*/
/*compile-errors:e158_278337.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278337.c:17:9: warning: unused variable 'a' [-Wunused-variable]
    int a,p;
        ^
e158_278337.c:18:19: warning: variable 'p' is uninitialized when used here [-Wuninitialized]
    p=check_prime(p);
                  ^
e158_278337.c:17:12: note: initialize the variable 'p' to silence this warning
    int a,p;
           ^
            = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int a,p=0;
for(a=2;a<=num/2;a++)
{
   if(num%a==0)
   p++;
}
if(p==0)
{
return num;
}
}
int main(){
    int a,p;
    p=check_prime(p);
    printf("%d",p);
    
    return 0;
}