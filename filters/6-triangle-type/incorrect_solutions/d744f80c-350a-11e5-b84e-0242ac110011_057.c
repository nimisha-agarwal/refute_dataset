/*compile-errors:e156_271798.c:6:16: warning: variable 'z' is uninitialized when used here [-Wuninitialized]
     if(x>y&&x>z)
               ^
e156_271798.c:4:20: note: initialize the variable 'z' to silence this warning
{   int a,b,c,x,y,z;
                   ^
                    = 0
e156_271798.c:6:9: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
     if(x>y&&x>z)
        ^
e156_271798.c:4:16: note: initialize the variable 'x' to silence this warning
{   int a,b,c,x,y,z;
               ^
                = 0
e156_271798.c:6:11: warning: variable 'y' is uninitialized when used here [-Wuninitialized]
     if(x>y&&x>z)
          ^
e156_271798.c:4:18: note: initialize the variable 'y' to silence this warning
{   int a,b,c,x,y,z;
                 ^
                  = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   int a,b,c,x,y,z;
    scanf("%d,%d,%d",&a,&b,&c);
     if(x>y&&x>z)
     {
         b=x;
         c=y;
         a=z;
     }
     if (y>x&&y>z)
     {
         b=y;
         c=z;
         a=x;
     }
     if (z>x&&z>y)
     {
         b=z;
         a=x;
         c=y;
     }
     if(b*b<a*a+c*c)
    {
      printf("Obtuse Triangle");
    }
    else{
    if(b*b==a*a+c*c)
    {
        printf("Right Triangle");
    }
    else{
    if(b*b>a*a+c*c)
    {
        printf("Acute Triangle");
    }
    else{
    if((a+b)<c||(b+c)<a||(a+c)<b)
    {
        printf("invalid triangle"); 
    }}}}
    return 0;
}