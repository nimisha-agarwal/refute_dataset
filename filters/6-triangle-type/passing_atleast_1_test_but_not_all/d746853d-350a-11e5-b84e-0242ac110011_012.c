/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
            int a,b,c;                      //variable declaration
            
        
            scanf("%d %d %d",&a,&b,&c);     /*storage in memory*/
            
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
     
                 {printf("Right Triangle ");}
                 return 0;
    
}
    
