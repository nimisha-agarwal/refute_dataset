/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main () {
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if((a+b<=c)||(b+c<=a)||(c+a<=b)) {printf("Invalid Triangle");}
else{
    float cosc = ((a*a)+(b*b)-(c*c))/(2*a*b);
    float cosa = ((c*c)+(b*b)-(a*a))/(2*c*b);
    float cosb = ((a*a)+(c*c)-(b*b))/(2*a*c);
    if((cosa<0)||(cosb<0)||(cosc<0)){
        printf("Obtuse Triangle");}
        else{
            if((cosa==0)||(cosb==0)||(cosc==0)){
                printf("Right Triangle");
            }
            else{
                printf("Acute Triangle");
            }
        }
}}