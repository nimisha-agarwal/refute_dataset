/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max,min,mid;
    if((a>b)&&(a>c))
        max=a;
    if((c>b)&&(c>a))
        max=c;
     if((b>c)&&(b>a))
        max=b;
    if((a<b)&&(a<c))
        min=a;
    if((c<b)&&(c<a))
        min=c;
     if((b<c)&&(b<a))
        min=b;
    if((a!=min)&&(a!=max))
        mid=a;
    if((b!=min)&&(b!=max))
        mid=b;
    else
        mid=c;    
    if((min+mid)>(max))    
        {
            int cos=(min*min)+(mid*mid)-(max*max);
            if(cos==0)
                printf("Right Triangle");
            if(cos>0)
                printf("Acute Triangle");
            if(cos<0)
                printf("Obtuse Triangle");
        }
    else
        printf("Invalid Triangle");

            
            
        
        
        
        
    return 0;
}