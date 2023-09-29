/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf ("%d %d %d", &a,&b,&c);
if ((a*a)+(c*c)==(b*b))
{
    printf("Right Triangle");
}
    return 0;

}