/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
            int a,b,c;                      //variable declaration
            
        
            scanf("%d %d %d",&a,&b,&c);     /*storage in memory*/
            
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)   /*decision control instruction*/
     
                 {printf("Right Triangle ");}
                
        else if(a*a+b*b-c*c>0 || a*a+c*c-b*b>0 || c*c+b*b-a*a>0)
    
                    {printf("Acute Triangle");}
                
            else if(a*a+b*b-c*c>2*a*b || a*a+c*c-b*b>2*a*c || b*b+c*c-a*a>2*b*c)
            
                    {printf("Invalid Triangle");}
                
         else
         {printf("Obtuse Triangle");}
        
                    
                
                return 0;
                
    
}
    
