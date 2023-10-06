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
    
    if((x==y+z)||(y==x+z)||(z==x+y))
    {
        printf("Right Triangle");
    }
    
    return 0;
}