/*compile-errors:e156_271822.c:7:31: warning: if statement has empty body [-Wempty-body]
 if((a>b)&(a>c)&(a*a>c*c+b*b)); 
                              ^
e156_271822.c:7:31: note: put the semicolon on a separate line to silence this warning
e156_271822.c:9:31: warning: if statement has empty body [-Wempty-body]
 if((a>b)&(a>c)&(a*a<c*c+b*b));
                              ^
e156_271822.c:9:31: note: put the semicolon on a separate line to silence this warning
e156_271822.c:11:32: warning: if statement has empty body [-Wempty-body]
 if((a>b)&(a>c)&(a*a==b*b+c*c));
                               ^
e156_271822.c:11:32: note: put the semicolon on a separate line to silence this warning
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
 if((a>b)&(a>c)&(a*a>c*c+b*b)); 
 printf("Acute triangle");
 if((a>b)&(a>c)&(a*a<c*c+b*b));
 printf("Obtuse Triangle");
 if((a>b)&(a>c)&(a*a==b*b+c*c));
 printf("Right Triangle");
     
 return 0;
}