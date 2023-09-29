/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   
    int a,b,c;
    int p,q,r;
    scanf("%d %d %d",&a,&b,&c);
    p=((a*a)+(b*b)-(c*c))/(2*a*b);  //for calculating cosine values of 
    q=((b*b)+(c*c)-(a*a))/(2*b*c);  // angles of triangles 
    r=((a*a)+(c*c)-(b*b))/(2*a*c);
    if(((a+b)<c)||((b+c)<a)||((a+c)<b))
    {
        printf("Invalid Triangle\n");
    }
    else
    {
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
    }
    return 0;
}