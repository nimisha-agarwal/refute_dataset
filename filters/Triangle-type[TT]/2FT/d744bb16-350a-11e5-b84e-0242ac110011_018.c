/*execute-result:OK*/
/*compile-errors:e156_271789.c:6:22: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d",a,b,c);
           ~~        ^
e156_271789.c:6:24: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d",a,b,c);
              ~~       ^
e156_271789.c:6:26: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d %d %d",a,b,c);
                 ~~      ^
e156_271789.c:6:24: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d",a,b,c);
                       ^
e156_271789.c:5:12: note: initialize the variable 'b' to silence this warning
    int a,b,c,ls,ss1,ss2;
           ^
            = 0
e156_271789.c:6:26: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d",a,b,c);
                         ^
e156_271789.c:5:14: note: initialize the variable 'c' to silence this warning
    int a,b,c,ls,ss1,ss2;
             ^
              = 0
e156_271789.c:6:22: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    scanf("%d %d %d",a,b,c);
                     ^
e156_271789.c:5:10: note: initialize the variable 'a' to silence this warning
    int a,b,c,ls,ss1,ss2;
         ^
          = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,ls,ss1,ss2;
    scanf("%d %d %d",a,b,c);
    if(a>=b)
    {
        if(a>=c)
        {
            ls=a;
            ss1=b;
            ss2=c;
        }
        else
        {
            ls=c;
            ss1=a;
            ss2=b;
        }    
            
    }
    else
    {
        if(b>c)
        {
            ls=b;
            ss1=a;
            ss2=c;
        }    
    }
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        if((ss1*ss1)+(ss2*ss2)==(ls*ls))
            printf("Right Triangle");
        else if((ss1*ss1)+(ss2*ss2)<(ls*ls))
            printf("Obtuse Triangle");
        else
            printf("Acute Triangle");
    }
    else
        printf("Invalid Triangle");
    return 0;
}