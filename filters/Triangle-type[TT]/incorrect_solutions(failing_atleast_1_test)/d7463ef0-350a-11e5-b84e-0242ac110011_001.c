/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c; /* 3 sides of a triangle*/
 scanf("%d %d %d",&a,&b,&c);
 if (a<b>c) {
 if (a*a+c*c==b*b) {
     printf("Right Triangle");
 }
else if (a*a+c*c>=b*b) {
    printf("Obtuse Triangle");
}
else if (a*a+c*c<=b*b) {
    printf("Acute Triangle");
}
else if (a+c<b) {
    printf("Invalid Triangle");
}
}
    return 0;
}