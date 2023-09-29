/*execute-result:OK*/
/*compile-errors:e156_271884.c:19:18: warning: expression result unused [-Wunused-value]
    }else if((a+b<c),(b+c<a),(c+a<b)){
              ~~~^~
e156_271884.c:19:26: warning: expression result unused [-Wunused-value]
    }else if((a+b<c),(b+c<a),(c+a<b)){
                      ~~~^~
2 warnings generated.*/
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


    }else if((a*a+b*b)<c*c){
    printf("Obtuse Triangle");

    }else if((a+b<c),(b+c<a),(c+a<b)){
    printf("Invalid Triangle");
    }
    return 0;
}