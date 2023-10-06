/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b) <= c) {
        printf("Invalid Triangle");
    }
    if((a*a)+(b*b)==(c*c)) {
        printf("Right Triangle");
    }
    if ((a*a)+(b*b)<=(c*c)) {
        printf("Obtuse Triangle");
    }
    if((a*a)+(b*b)>=(c*c)){
        printf("Acute Triangle");
    }
    return 0;
}