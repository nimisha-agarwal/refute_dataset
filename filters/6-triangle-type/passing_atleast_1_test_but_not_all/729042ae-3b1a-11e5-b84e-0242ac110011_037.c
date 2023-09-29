/*compile-errors:e156_271775.c:22:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(D=0){
       ~^~
e156_271775.c:22:9: note: place parentheses around the assignment to silence this warning
    if(D=0){
        ^
       (  )
e156_271775.c:22:9: note: use '==' to turn this assignment into an equality comparison
    if(D=0){
        ^
        ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,x;
    float D;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(b>c){
            x=a;
            D=b*b+c*c-x*x;
        }
        if(c>a){
            x=c;
            D=a*a+b*b-x*x;
        }
     }
    else {
    x=b;
    D=a*a+c*c-x*x;
    }
    if(D=0){
        printf("Right Triangle");
    }
    else if(D>0){
        printf("Acute Triangle");
    }
    else if(D<0 && D>(-1)){
        printf("Obtuse Triangle");
    }
    else printf("Invalid Triangle");
    return 0;
}