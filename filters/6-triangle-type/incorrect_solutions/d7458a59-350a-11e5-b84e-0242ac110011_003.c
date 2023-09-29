/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int l,m,n;
    l=a*a+b*b;  // will be used for checking the type of triangle
    m=b*b+c*c;
    n=a*a+c*c;
    if(a<0||b<0||c<0) //Side cant be negative
    printf("Invalid Triangle");
    else{
    if ((a+b>c)&&(a+c>b)&&(b+c>a)) //Check for valid traingle
    {   if((l==c*c)||(m==a*a)||(n==b*b))
        printf("Right Triangle");
        else if((l>c*c)&&(m>a*a)&&(n>b*b))
        printf("Obtuse Triangle");
        else
        printf("Acute Triangle");
    }
    else
    printf("Invalid Triangle");
    }
    return 0;
}