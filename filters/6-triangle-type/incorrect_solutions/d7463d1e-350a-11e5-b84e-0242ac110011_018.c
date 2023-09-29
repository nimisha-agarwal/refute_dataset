/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
float x,y,z;
scanf("%d %d %d",&a,&b,&c);
x=((a*a)+(b*b)-(c*c))/(2*a*b);
y=((b*b)+(c*c)-(a*a))/(2*b*c);
z=((a*a)+(c*c)-(b*b))/(2*a*c);
if(x<0||y<0||z<0)
    printf("obtuse triangle");
if(x>0&&y>0&&z>0)    
    printf("acute triangle");
if(x==0||y==0||z==0)
    printf("right triangle");
if((x<=0&&y<=0)||(y<=0&&z<=0)||(x<=0&&z<=0))
    printf("Invalid Triangle");
    return 0;
}