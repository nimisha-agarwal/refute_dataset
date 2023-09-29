/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   int a,b,c; 
    scanf("%d,%d,%d",&a,&b,&c);
    if(b*b<a*a+c*c)
    {
      printf("triangle is obtuse");
    }
    if(b*b==a*a+c*c)
    {
        printf("triangle is right");
    }
    if(b*b>a*a+c*c)
    {
        printf("triangle is acute");
    }
    if((a+b)<c||(b+c)<a||(a+c)<b)
    {
        printf("invalid triangle"); 
    }
    return 0;
}