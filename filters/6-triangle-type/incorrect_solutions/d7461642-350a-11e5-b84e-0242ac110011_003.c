/*compile-errors:e156_271850.c:5:3: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
d=a*a;
  ^
e156_271850.c:4:7: note: initialize the variable 'a' to silence this warning
{int a,b,c,d,e,f;
      ^
       = 0
e156_271850.c:6:3: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
e=b*b;
  ^
e156_271850.c:4:9: note: initialize the variable 'b' to silence this warning
{int a,b,c,d,e,f;
        ^
         = 0
e156_271850.c:7:3: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
f=c*c;
  ^
e156_271850.c:4:11: note: initialize the variable 'c' to silence this warning
{int a,b,c,d,e,f;
          ^
           = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{int a,b,c,d,e,f;
d=a*a;
e=b*b;
f=c*c;
scanf("%d%d%d",&a,&b,&c);
if (d+e==f)
{printf("Right Triangle");}
    return 0;
}