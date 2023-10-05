/*compile-errors:e156_271799.c:7:9: warning: expression result unused [-Wunused-value]
    (a+c>b); // input a,b,c
     ~~~^~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a; int b; int c;
    scanf("%d%d%d",&a,&b,&c);
    (a+c>b); // input a,b,c
    if ((a*a+c*c)<b*b) {      // 
        printf("Acute Triangle");
    } else {
    if ((a*a+c*c)==b*b) {
        printf("Right Triangle");
    } else {
    if ((a*a+c*c)>b*b) {
        printf ("Obtuse Triangle");
    } else {
        printf("Invalid Triangle");
    }
    }
    }
    return 0;
}