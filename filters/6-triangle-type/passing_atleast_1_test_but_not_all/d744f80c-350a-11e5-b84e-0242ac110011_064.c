/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   int a,b,c,x,y,z;
    scanf("%d,%d,%d",&x,&y,&z);
     if(x>=y&&x>=z)
     {
         b=x;
         c=y;
         a=z;
     }
     if (y>=x&&y>=z)
     {
         b=y;
         c=z;
         a=x;
     }
     if (z>=x&&z>=y)
     {
         b=z;
         a=x;
         c=y;
     }
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