/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main () {
float a,b,c;                        // a b c are sides of triangle
scanf("%f %f %f",&a,&b,&c);         // input of a b c are taken
if((a+b<=c)||(b+c<=a)||(c+a<=b)) {printf("Invalid Triangle");}//checks if sides of triangle are valig by the fact that sum of two sides is less than third side
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
}
    return 0;
}