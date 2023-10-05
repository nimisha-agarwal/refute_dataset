/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a; int b; int c; 
    
    scanf("%d%d%d",&a,&b,&c);
    
    if (a+b<=c||b+c<=a||c+a<=b){
        
        printf("Invalid Triangle"); 
    }
    
    else if (a*a+b*b==c*c){
        
        printf("Right Triangle");
    }
    else if(a*a+b*b>c*c){
        
        printf("Acute Triangle");
    }
    else if(a*a+b*b<c*c){
        printf("Obtuse Triangle");
    }
    
    
    
    
    
    
  return 0;
}