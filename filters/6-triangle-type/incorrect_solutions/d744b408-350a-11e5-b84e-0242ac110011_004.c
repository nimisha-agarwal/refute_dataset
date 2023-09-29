/*compile-errors:e156_271786.c:12:7: warning: variable 'd' is uninitialized when used here [-Wuninitialized]
    a=d;
      ^
e156_271786.c:6:10: note: initialize the variable 'd' to silence this warning
    int d;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    int d;
    scanf("%d %d %d",&a,&b,&c);//a>b>c 
    if (a<b||a<c)
    {
        if(b>c)
    {
    a=d;
    a=b;
    b=d;
        
    }
    else if(c>b)
    {
        a=d;
    a=c;
    c=d;
    }
    }

    if((c*c+b*b)==a*a)
    printf("Right Triangle");
    else if((c*c+b*b)>a*a)
    printf("Acute Triangle");
    else if((c*c+b*b)<a*a)
    printf("Obtuse Traingle");
    else if ((b+c)<=a)
    printf("Invalid Triangle");
    return 0;
}