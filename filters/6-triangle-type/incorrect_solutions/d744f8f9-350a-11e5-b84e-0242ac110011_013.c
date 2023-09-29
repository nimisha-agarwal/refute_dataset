/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a; int b; int c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+c)>b) { // input a,b,c
    if ((a*a+c*c)<b*b) {      // 
        printf("Acute Triangle");
    } else {
    if ((a*a+c*c)==b*b) {
        printf("Right Triangle");
    } else {
    if ((a*a+c*c)>b*b) {
        printf ("Obtuse Triangle");
    } else {
    } 
    }
    }
    } else {
        printf("Invalid Triangle");
    }
    return 0;
}