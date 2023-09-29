/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a>=b && a>=c){
       if((a*a)==(b*b+c*c)){
          printf("Right Triangle");
       }  
       else if((a*a)>(b*b+c*c)){
          printf("Obtuse Triangle");
       }
       else if((a*a)<(b*b+c*c)){
          printf("Acute Triangle");
       }
       else{
           printf("Invalid Triangle");
       }
   }
   else if(b>=c && b>=a){
         if((b*b)==(a*a+c*c)){
          printf("Right Triangle");
         }  
         else if((b*b)>(a*a+c*c)){
          printf("Obtuse Triangle");
         }
         else if((b*b)<(a*a+c*c)){
          printf("Acute Triangle");
       }
       else{
           printf("Invalid Triangle");
       }
   }
   else {        
        if((c*c)==(a*a+b*b)){
          printf("Right Triangle");
        }  
        else if((c*c)>(a*a+b*b)){
          printf("Obtuse Triangle");
        }
        else if((c*c)<(b*b+a*a)){
          printf("Acute Triangle");
        }
       else{
           printf("Invalid Triangle");
        }

       
   }
   
    return 0;
}