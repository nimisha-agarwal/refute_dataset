/*execute-result:OK*/
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
    if(((a+b)<c)||((b+c)<a)||((a+c)<b))  //checking for valid triangle
    {
        printf("Invalid Triangle\n");
    }
    else
    {
        if((p>0)&&(q>0)&&(r>0))
        {
            printf("Acute Triangle\n");
        }
         else if((p==0)||(q==0)||(r==0))
        {
            printf("Right Triangle\n");
        }
        else if((p<0)||(q<0)||(r<0))
        {
            printf("Obtuse Triangle\n");
        }
       
    }
    return 0;
}