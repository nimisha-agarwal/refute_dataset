/*execute-result:OK*/
/*compile-errors:e158_278337.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
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

return num;
}

int main(){
    int a,p=0;
    scanf("%d",&a);
    printf("%d",p);
    
    return 0;
}