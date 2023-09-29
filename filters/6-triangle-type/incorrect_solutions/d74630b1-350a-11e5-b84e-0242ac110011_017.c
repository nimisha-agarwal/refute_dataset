/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>


int main()
{
int a;
int b;
int c;
scanf("%d %d %d",&a,&b,&c);
if(((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(a*a)+(b*b))) {
    printf("Right Triangle");
    }
if(((a*a)<(b*b)+(c*c))||((b*b)<(c*c)+(a*a))||((c*c)<(b*b)+(a*a))) {
    printf("Acute Triangle");
} 
if(((a*a)>(b*b)+(c*c))||((b*b)>(c*c)+(a*a))||((c*c)>(b*b)+(a*a))) {
    printf("Obtuse Triangle");
}
else{
    printf("Invalid Tringle");
}
    return 0;
}