/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a*a;
    int y=b*b;
    int z=c*c;
    int ca=(y+z-x)/2*b*c;
    int cb=(x+z-y)/2*a*c;
    int cc=(y+x-z)/2*b*a;
    if((x==y+z)||(y==x+z)||(z==x+y))
        {
            printf("Right Triangle");
        }
    if(((a+b>c)||(b+c>a)||(a+c>b))&&(ca<0 || cb<0 || cc<0))    
        {
            printf("Obtuse Triangle");       
        }
    if(ca>0 && cb>0 && cc>0)    
        {
            printf("Acute Triangle");       
        }    
     if((a+b<=c)||(b+c<=a)||(a+c<=b))
        {
            printf("Invalid Triangle");
            
        }
    return 0;
}