/*compile-errors:e156_271821.c:9:9: warning: implicit declaration of function 'trl' is invalid in C99 [-Wimplicit-function-declaration]
    p = trl(a,b,c);//function for checking validity
        ^
1 warning generated.*/
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
    if (p == 1)//p = 1 is a valid triangle
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
        return 0;
    }
}