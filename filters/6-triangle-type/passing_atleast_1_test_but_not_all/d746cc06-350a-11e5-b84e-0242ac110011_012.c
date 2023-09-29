/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main()
{
int a,b,c;//for storing sides.
scanf("%d%d%d",&a,&b,&c);
if(((a+b)<=c)||(a+c<=b)||(b+c<=a))
printf("Invalid Triangle.");
float d;
if((a>b)&&(a>c))
{
d=((b*b)+(c*c)-(a*a))/2.0*b*c;    
if(d>0)
printf("acute");
else if(d<0)
printf("obtuse");
else
printf("Right Triangle");
}
if((b>c)&&(b>a))
{
d=((a*a)+(c*c)-(b*b))/2.0*a*c;
if(d>0)
printf("acute");
else if(d<0)
printf("obtuse");
else
printf("Right Triangle");
}
if((c>a)&&(c>b))
{
d=((a*a)+(b*b)-(c*c))/2.0*a*b;
if(d>0)
printf("acute");
else if(d<0)
printf("obtuse");
else
printf("Right Triangle");
}
return 0;
}
    
    
