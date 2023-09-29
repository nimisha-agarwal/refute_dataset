/*compile-errors:e156_271798.c:4:15: warning: unused variable 'x' [-Wunused-variable]
{   int a,b,c,x,y,z;
              ^
e156_271798.c:4:17: warning: unused variable 'y' [-Wunused-variable]
{   int a,b,c,x,y,z;
                ^
e156_271798.c:4:19: warning: unused variable 'z' [-Wunused-variable]
{   int a,b,c,x,y,z;
                  ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   int a,b,c,x,y,z;
    scanf("%d,%d,%d",&c,&a,&b);
     if((b*b)<(a*a)+(c*c))
    {
      printf("Obtuse Triangle");
    }
    else{
    if((b*b)==(a*a)+(c*c))
    {
        printf("Right Triangle");
    }
    else{
    if((b*b)>(a*a)+(c*c))
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