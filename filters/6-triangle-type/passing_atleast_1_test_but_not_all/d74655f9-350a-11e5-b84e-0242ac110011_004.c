/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;  //variables to store the lengths of 3 sides of triangle
    scanf("%d%d%d",&a,&b,&c);
    if((a+b<c)||(a+c<b)||(b+c<a))   //Triangle inequality is violated
    {                               
        printf("Invalid Triangle"); 
    }
//----------------------------------------------------------------
//  storing the length of the largest side in variable c
    if(a>c)
    {
        int temp1;  //temporary variable to swap the values of a & c
        temp1=a;
        a=c;
        c=temp1;
    }
    else if(b>c)
    {
        int temp2;  //temporary variable to swap the values of b & c
        temp2=b;
        b=c;
        c=temp2;
    }
//------------------------------------------------------------------
    if((c*c)==((a*a)+(b*b)))
        printf("Right Triangle");
    
    else if((c*c)>((a*a)+(b*b)))
            printf("Obtuse Triangle");
    
         else if((c*c)<((a*a)+(b*b)))
                printf("Acute Triangle");
    
    return 0;
}