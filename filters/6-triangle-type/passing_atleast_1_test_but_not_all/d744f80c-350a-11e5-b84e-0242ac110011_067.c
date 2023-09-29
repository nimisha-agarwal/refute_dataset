/*compile-errors:e156_271798.c:4:16: warning: unused variable 'x' [-Wunused-variable]
{    int a,b,c,x,y,z;
               ^
e156_271798.c:4:18: warning: unused variable 'y' [-Wunused-variable]
{    int a,b,c,x,y,z;
                 ^
e156_271798.c:4:20: warning: unused variable 'z' [-Wunused-variable]
{    int a,b,c,x,y,z;
                   ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{    int a,b,c,x,y,z;
    scanf("%d,%d,%d",&a,&b,&c);
     if((c*c)<(a*a)+(b*b))
    {
      printf("Obtuse Triangle");
    }else
    if((c*c)==(a*a)+(b*b)||(a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c))
    {
        printf("Right Triangle");
    }else{
    if((c*c)>(a*a)+(b*b)&&(b*b)>(a*a)+(c*c)&&(a*a)>(b*b)+(c*c))
    {
        printf("Acute Triangle");
    }
    else{
    if((a+b)<c||(b+c)<a||(a+c)<b)
    {
        printf("invalid triangle"); 
    }}}
    return 0;
    }