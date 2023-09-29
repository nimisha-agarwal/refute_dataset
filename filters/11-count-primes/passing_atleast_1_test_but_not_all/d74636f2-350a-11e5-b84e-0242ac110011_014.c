/*compile-errors:e158_278081.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}  //function complete.
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{int i,p;//defining of integers for function.
p=0;
for(i=2;i<num;i++)
{ if(p%i==0)
{
p=1;
break;
}
}
if (p==0)
return num;
if (p==1)
return 80;
}  //function complete.
int main() {
int a,b,count;
scanf("%d",&a);
for(b=2;b<=a;b++)
{ int i;
for(i=2;i<b;i++)
{ count=0;
    count = count + ((b%i==0)&&((b+2)%i==0));
}
}    printf("%d",count);
    return 0;
}