/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;                        //3 sides in standard notation
    float cosA,cosB,cosC;             //3 angles in standard notation
    scanf("%d %d %d",&a,&b,&c);
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