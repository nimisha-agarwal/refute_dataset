/*execute-result:OK*/
/*compile-errors:e156_271842.c:8:74: warning: if statement has empty body [-Wempty-body]
    {if((a*a == (b*b)+(c*c))||(b*b == (a*a)+(c*c))||(c*c == (b*b)+(a*a)));
                                                                         ^
e156_271842.c:8:74: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {if((a*a == (b*b)+(c*c))||(b*b == (a*a)+(c*c))||(c*c == (b*b)+(a*a)));
    printf("Right Triangle");
    }
    else 
    printf("Invalid Triangle");
    return 0;
}