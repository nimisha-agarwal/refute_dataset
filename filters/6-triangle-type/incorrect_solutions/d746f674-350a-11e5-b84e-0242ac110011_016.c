/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    float a;
    float b;
    float c;
    scanf("%f%f%f",&a,&b,&c);
    if((a*a+c*c)>b*b){
    printf("Acute Triangle");
  
    }else if((a*a+c*c)==b*b){
    printf("Right Triangle");


    }else if((a*a+c*c)<b*b){
    printf("Obtuse Triangle");

    }else{
    printf("Invalid Triangle");
    }
    return 0;
}