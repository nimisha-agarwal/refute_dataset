/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
 int a,b,c; // decl. without initialisation
 scanf("%d %d %d",&a,&b,&c); // input a,b,c
 if ((a+b)>c && (b+c)>a && (c+a)>b) { // expression
     if ((a*a+b*b)>c*c) { // condition
         printf("Acute Triangle");} //shows result
     else if (((a*a+b*b)==c*c) || ((a*a+c*c)==b*b) || ((c*c+b*b)==a*a)) { // condition
         printf("Right Triangle");} //result
     else {printf("Obtuse Triangle");} // result if above two conditions fail
 }
 else {printf("Invalid Triangle");} // result if expression fails
    return 0;
}