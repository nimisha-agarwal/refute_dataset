/*compile-errors:e156_271847.c:8:10: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    if(a+b>c && b+c>a && c+a>b){      //valid triangle condtion
         ^
e156_271847.c:5:12: note: initialize the variable 'b' to silence this warning
    int a,b,c;                        //3 sides in standard notation
           ^
            = 0
e156_271847.c:8:12: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    if(a+b>c && b+c>a && c+a>b){      //valid triangle condtion
           ^
e156_271847.c:5:14: note: initialize the variable 'c' to silence this warning
    int a,b,c;                        //3 sides in standard notation
             ^
              = 0
e156_271847.c:8:8: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    if(a+b>c && b+c>a && c+a>b){      //valid triangle condtion
       ^
e156_271847.c:5:10: note: initialize the variable 'a' to silence this warning
    int a,b,c;                        //3 sides in standard notation
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;                        //3 sides in standard notation
    float cosA,cosB,cosC;             //3 angles in standard notation
    
    if(a+b>c && b+c>a && c+a>b){      //valid triangle condtion
        cosA=(b*b+c*c-a*a)/(2*b*c);   //using cosine rule for angle A
        cosB=(c*c+a*a-b*b)/(2*a*c);   //for angle B
        cosC=(a*a+b*b-c*c)/(2*a*b);   //for angle C                                                         /* all types are mutually                                              exclusive that is a right triangle                                      can't be acute or abtuse & so on*/
        if(cosA==0||cosB==0||cosC==0) //cos 90 =0 
           printf("Right Triangle");
        else if (cosA<0&&cosB<0&&cosC<0) //cos acute angle =0
            printf("Acute Triangle");
        else printf("Obtuse Triangle");  //only remaining case
    }     
    else printf("Invalid Triangle");
    return 0;
}