/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main ()
/* program to check whether the triangle is acute,obtuse,right or 
the given side lenght represent invalid triangle*/
{
    int a;
    int b;
    int c;
    scanf("%d%d%d", &a, &b, &c);
    if((a+b>c) && (a+c>b) && (b+c>a)){
        /*condition for valid triangle i.e. sum of any 2 side must 
        be greater than the third side*/
        if( ((a*a)+(b*b)==(c*c)) || ((a*a)+(c*c)==(b*b)) || ((b*b)+(c*c)==(a*a)) ){
        //condition for triangle to be right triangle    
        printf("Right Triangle");
        }
        else if( ((a*a)+(b*b)<(c*c)) || ((a*a)+(c*c)<(b*b)) || ((b*b)+(c*c)<(a*a)) ){
        //condition for triangle to be obtuse triangle
        printf("Obtuse Triangle");
        }
        else if(((a*a)+(b*b)>(c*c))||((a*a)+(c*c)>(b*b))||((b*b)+(c*c)>(a*a))){
        //condition for triangle to be acue triangle
        printf("Acute Triangle");
        }
    }
    else{
        printf("Invalid Triangle");
        }
    /* if condition for triangle i.e. sum of any 2 sides must be 
    greater than the third side ,is not satisfied.Then print invalid
    triangle*/
    return 0;
}