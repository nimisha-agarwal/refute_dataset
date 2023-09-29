/*execute-result:OK*/
/*compile-errors:e156_271821.c:9:9: warning: implicit declaration of function 'trl' is invalid in C99 [-Wimplicit-function-declaration]
    p = trl(a,b,c);//function for checking validity
        ^
e156_271821.c:10:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (p = 1)//p = 1 is a valid triangle
        ~~^~~
e156_271821.c:10:11: note: place parentheses around the assignment to silence this warning
    if (p = 1)//p = 1 is a valid triangle
          ^
        (    )
e156_271821.c:10:11: note: use '==' to turn this assignment into an equality comparison
    if (p = 1)//p = 1 is a valid triangle
          ^
          ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a, b, c;//Sides of triangle input value
    scanf("%d %d %d",&a,&b,&c);
    int p;//Flag
    int q, r, s;//markers for triangle checking
    p = trl(a,b,c);//function for checking validity
    if (p = 1)//p = 1 is a valid triangle
    {
        q = (a*a) + (b*b) - (c*c);
        r = (b*b) + (c*c) - (a*a);
        s = (c*c) + (a*a) - (b*b);
        if (q == 0||r == 0||s == 0)
            printf("Right Triangle");
        else if (q < 0||r < 0||s < 0)
            printf("Acute Triangle");
        else
            printf("Obtuse Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}
int trl(int a,int b,int c)
{
    
    if (a > 0 && b > 0 && c > 0)
    {
        if ((a + b)>c&&(b + c)>a&&(a + c)>b)
            return 1;
        else
            return 0;
    }
    else
    {
        printf("Yahoo!\n");
        return 0;
    }
}