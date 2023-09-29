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
    if((a*a+b*b)>c*c){
    printf("Acute Triangle");
  
    }else if((a*a+b*b)==c*c){
    printf("Right Triangle");
    
        
    }else if(a+b<c){
    printf("Invalid Triangle");

    }else if((a*a+b*b)<c*c){
    printf("Obtuse Triangle");
    
    }
    return 0;
}