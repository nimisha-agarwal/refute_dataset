/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main () {
float a,b,c;                           // a b c are sides of triangle
scanf("%f %f %f",&a,&b,&c);            // input of a b c are taken
if((a+b<=c)||(b+c<=a)||(c+a<=b)) {
    printf("Invalid Triangle");}       //sum of two sides is always greater than third side
    else{
    float cosc = ((a*a)+(b*b)-(c*c))/(2*a*b);    
    float cosa = ((c*c)+(b*b)-(a*a))/(2*c*b);
    float cosb = ((a*a)+(c*c)-(b*b))/(2*a*c);   //computes cosines related to the three sides
    if((cosa<0)||(cosb<0)||(cosc<0)){   
        printf("Obtuse Triangle");}             //if any one of cosine value is negative triangle is obtuse
        else{
            if((cosa==0)||(cosb==0)||(cosc==0)){ // if any cosine is zero triangle is right angled
                printf("Right Triangle");
            }                                   
            else{
                printf("Acute Triangle");     // if none condition is satisfied triangle is acute
            }
        }
}
    return 0;
}