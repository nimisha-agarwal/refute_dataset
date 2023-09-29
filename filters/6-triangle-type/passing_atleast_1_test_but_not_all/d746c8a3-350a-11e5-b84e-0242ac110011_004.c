/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;//variable declaration
    scanf("%d %d %d",&a,&b,&c);//taking input
    int max,min,mid;//variable declaration
    if((a>b)&&(a>c))
        max=a;
    if((c>b)&&(c>a))
        max=c;      // finding maximum 
     if((b>c)&&(b>a))
        max=b;       
    if((a<b)&&(a<c))
        min=a;
    if((c<b)&&(c<a))
        min=c;       //finding minimum
     if((b<c)&&(b<a))
        min=b;       
    if((a!=min)&&(a!=max))
        mid=a;
    if((b!=min)&&(b!=max))
        mid=b;            // finding middle no.
     if((c!=min)&&(c!=max))
        mid=c;                
    if((min+mid)>(max)) //test for valid triangle   
        {
            int cos=(min*min)+(mid*mid)-(max*max);
            if(cos==0)//test for Right Triangle
                printf("Right Triangle");
            if(cos>0)//test for Acute Triangle
                printf("Acute Triangle");
            if(cos<0)//test for  Obtuse Triangle
                printf("Obtuse Triangle");
        }
    else
        printf("Invalid Triangle");

            
            
        
        
        
        
    return 0;
}