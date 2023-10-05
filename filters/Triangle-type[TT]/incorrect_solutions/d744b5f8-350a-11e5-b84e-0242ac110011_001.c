/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
float x,y,z;
scanf("%d%d%d",&a,&b,&c);
if((a+b<c)||(b+c<a)||(c+a<b))
printf("Invalid Triangle");
else
{
x=(float)(a*a+b*b-c*c)/(2*a*b);
y=(float)(b*b+c*c-a*a)/(2*b*c);
z=(float)(a*a+c*c-b*b)/(2*a*c);
if(x==0||y==0||z==0)
printf("Right Triangle");
else if (x<0||y<0||z<0)
printf("Obtuse Triangle");
else if (x>0&&y>0&&z>0)
printf("Acute Triangle");
}

    return 0;
}