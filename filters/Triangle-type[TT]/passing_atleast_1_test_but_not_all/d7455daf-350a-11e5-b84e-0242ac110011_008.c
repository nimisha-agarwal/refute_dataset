/*compile-errors:e156_271818.c:6:20: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,b,c);
           ~~      ^
e156_271818.c:6:22: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,b,c);
             ~~      ^
e156_271818.c:6:24: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d%d%d",a,b,c);
               ~~      ^
e156_271818.c:6:22: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,b,c);
                     ^
e156_271818.c:5:12: note: initialize the variable 'b' to silence this warning
    int a,b,c,l1;
           ^
            = 0
e156_271818.c:6:24: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,b,c);
                       ^
e156_271818.c:5:14: note: initialize the variable 'c' to silence this warning
    int a,b,c,l1;
             ^
              = 0
e156_271818.c:6:20: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d%d",a,b,c);
                   ^
e156_271818.c:5:10: note: initialize the variable 'a' to silence this warning
    int a,b,c,l1;
         ^
          = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,l1;
    scanf("%d%d%d",a,b,c);
    {
    if(a>b)
    {
        if(c>a)
            l1=c;
        else
            l1=a;
    }
    else
    {
    if(b>c)
    l1=b;
    else
    l1=c;
    }
    }
    a=b;
    b=c;
    c=l1;
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        if(((a*a)+(b*b))==(c*c))
        printf("Right Triangle");
        else
        if(((a*a)+(b*b))<(c*c))
        printf("Obtuse Triangle");
        else
        if(((a*a)+(b*b))>(c*c))
        printf("Right Triangle");
    }
    else
    printf("Invalid Triangle");
    
    
    
   
    return 0;
}