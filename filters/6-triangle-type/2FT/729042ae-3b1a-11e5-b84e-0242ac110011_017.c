/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,x;
    float D;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b){
        if(a>=c){
            x=a;
            D=(b*b+c*c-x*x)/2*b*c;
        }
            else
            x=c;
            D=(a*a+b*b-x*x)/2*a*b;
    }
    if(b>c){
        x=b;
        D=(a*a+c*c-x*x)/2*a*c;
    }
    if(D==0){
        printf("Right Triangle");
    }
    else if(D>0){
        printf("Acute Triangle");
    }
    else if(a+b<c || a+c<b || b+c<a){
        printf("Invalid Triangle");
    }
    else if(D<0){
        printf("Obtuse Triangle");
    }
    return 0;
}