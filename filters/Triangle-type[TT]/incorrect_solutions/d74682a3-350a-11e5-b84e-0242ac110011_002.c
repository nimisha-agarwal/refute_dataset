/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b<c)||(a+c<b)||(b+c<a)||(a<=0)||(b<=0)||(c<=0)){
        printf("Invalid Triangle");
    }
    else if(((a*a)+(b*b)>(c*c))&&
    ((a*a)+(c*c)>(b*b))&&
    ((c*c)+(b*b)>(a*a)))
    {
        printf("Acute Triangle");
    }
    else if((a*a)+(b*b)==(c*c)||
    (a*a)+(c*c)==(b*b)||
    (b*b)+(c*c)==(a*a))
    {
        printf("Right Triangle");
    }
    else if((a*a)+(b*b)<(c*c)||
    (a*a)+(c*c)<(b*b)||
    (b*b)+(c*c)<(a*a))
    {
        printf("Obtuse Triangle");
    }
    return 0;
}