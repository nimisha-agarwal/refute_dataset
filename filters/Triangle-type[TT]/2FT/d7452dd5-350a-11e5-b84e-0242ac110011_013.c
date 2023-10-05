/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (((a+b<=c)||(b+c<=a))||(c+a<=b)){
        printf("Invalid Triangle");
        
    }
    else{
        if ((a>=b)&&(b>=c)){
           if (((b*b)+(c*c)-(a*a))>0){
               printf("Acute Triangle");
           }    
        
            if (((b*b)+(c*c)-(a*a))<0){
                printf("Obtuse Triangle");
                
            } 
            if (((b*b)+(c*c)-(a*a))==0){
                printf("Right Triangle");}
            
        }
         if ((a>=c)&&(c>=b)){
           if (((b*b)+(c*c)-(a*a))>0){
               printf("Acute Triangle");
           }    
        
            if (((b*b)+(c*c)-(a*a))<0){
                printf("Obtuse Triangle");
                
            } 
            if (((b*b)+(c*c)-(a*a))==0){
                printf("Right Triangle");}
            }    
        if ((b>=a)&&(a>=c)){
           if (((a*a)+(c*c)-(b*b))>0){
               printf("Acute Triangle");
           }    
        
            if (((a*a)+(c*c)-(b*b))<0){
                printf("Obtuse Triangle");
                
            } 
            if (((a*a)+(c*c)-(b*b))==0){
                printf("Right Triangle");}
            
        }
        if ((b>=c)&&(c>=a)){
           if (((a*a)+(c*c)-(b*b))>0){
               printf("Acute Triangle");
           }    
        
            if (((a*a)+(c*c)-(b*b))<0){
                printf("Obtuse Triangle");
                
            } 
            if (((a*a)+(c*c)-(b*b))==0){
                printf("Right Triangle");}
            
        }
        if ((c>=a)&&(a>=b)){
           if (((a*a)+(b*b)-(c*c))>0){
               printf("Acute Triangle");
           }    
        
            if (((a*a)+(b*b)-(c*c))<0){
                printf("Obtuse Triangle");
                
            } 
            if (((a*a)+(b*b)-(c*c))==0){
                printf("Right Triangle");}
            
        }
        if ((c>=b)&&(b>=a)){
           if (((a*a)+(b*b)-(c*c))>0){
               printf("Acute Triangle");
           }    
        
            if (((a*a)+(b*b)-(c*c))<0){
                printf("Obtuse Triangle");
                
            } 
            if (((a*a)+(b*b)-(c*c))==0){
                printf("Right Triangle");}
            
        }
    }
    return 0;
        }