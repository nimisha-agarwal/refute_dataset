/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   int a,b,c; 
    scanf("%d,%d,%d",&a,&b,&c);
    if(b*b<a*a+c*c||a*a<b*b+c*c||c*c<a*a+b*b)
    {
      printf("triangle is obtuse");
    }
    else{
    if(b*b==a*a+c*c||a*a==b*b+c*c||c*c==a*a+b*b)
    {
        printf("triangle is right");
    }
    else{
    if(b*b>a*a+c*c||a*a>b*b+c*c||c*c>a*a+b*b)
    {
        printf("triangle is acute");
    }
    else{
    if((a+b)<c||(b+c)<a||(a+c)<b)
    {
        printf("invalid triangle"); 
    }}}}
    return 0;
}