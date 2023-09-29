/*compile-errors:e158_278081.c:12:10: warning: if statement has empty body [-Wempty-body]
if (p==0);
         ^
e158_278081.c:12:10: note: put the semicolon on a separate line to silence this warning
e158_278081.c:14:10: warning: if statement has empty body [-Wempty-body]
if (p==1);
         ^
e158_278081.c:14:10: note: put the semicolon on a separate line to silence this warning
2 warnings generated.*/
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
if (p==0);
return num;
if (p==1);
return 4;
}//function complete.
int main() {
int a,b;
scanf("%d",&a);
for(b=2;b<=a;b++)
{ int i,count;
for(i=2;i<b;i++)
{ count = count + (b%i==0);
    printf("%d",count);
}
}
    return 0;
}