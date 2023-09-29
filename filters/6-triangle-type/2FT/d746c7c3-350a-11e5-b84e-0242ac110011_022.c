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
    
    if((x==y+z)||(y==x+z)||(z==x+y))
        {
            printf("Right Triangle");
        }
    
    if((a+b<=c)||(b+c<=a)||(a+c<=b))
        {
            printf("Invalid Triangle");        
        }
    if((x+y<c)||(z+y<a)||(x+z<b))    
        {
            printf("Obtuse Triangle");       
        }
        
    return 0;
}