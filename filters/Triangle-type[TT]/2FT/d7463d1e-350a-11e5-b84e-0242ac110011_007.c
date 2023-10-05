/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
float a,b,c;
float x,y,z;
scanf("%f %f %f",&a,&b,&c);
x=((a*a)+(b*b)-(c*c))/(2*a*b);
y=((b*b)+(c*c)-(a*a))/(2*b*c);
z=((a*a)+(c*c)-(b*b))/(2*a*c);
if(x<=1&&y<=1&&z<=1&&x>=-1&&y>=-1&&z>=-1){
    if((x<0&&y>0&&z>0)||(y<0&&x>0&&z>0)||(z<0&&x>0&&y>0))
        printf("Obtuse Triangle");
    if(x>0&&y>0&&z>0)    
        printf("Acute Triangle");
    if(x==0||y==0||z==0)
        printf("Right Triangle");
}
    else
        printf("Invalid Triangle");
    return 0;
}