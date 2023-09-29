/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   
    int a,b,c;
    int p,q,r;
    scanf("%d %d %d",&a,&b,&c);
    p=(a*a)+(b*b)-(c*c);
    q=(b*b)+(c*c)-(a*a);
    r=(a*a)+(c*c)-(b*b);
    if((p>0)&&(q>0)&&(r>0))
    {
        printf("Acute Triangle\n");
    }
    if((p<0)||(q<0)||(r<0))
    {
        printf("Obtuse Triangle\n");
    }
    if((p==0)||(q==0)||(r==0))
    {
        printf("Right Triangle\n");
    }
    if(((a+b)<c)||((b+c)<a)||((a+c)<b))
    {
        printf("Invalid Triangle\n");
    }
    return 0;
}