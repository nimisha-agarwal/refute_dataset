/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int main(){

float a; float b; float c;

scanf("%f%f%f",&a,&b,&c); /* input a,b,c*/

    if ((c>a && c>b))
      {  if (a+b>c) 
            {
               if ((a*a+b*b)>(c*c)) /* expr representation */
                  {
                    printf("Acute Triangle");
                     }
      
                     else if ((a*a+b*b) == (c*c)) /* 2nd condition */ 
                      {  
                        printf ("Right Triangle");
                         }
      
                      else if ((a*a+b*b)<(c*c))
                       {
                         printf ("Obtuse Triangle"); // third condition
                          }
                             } 
          
    else {
           printf ("Invalid Triangle");    // invalid triangle  
           } 
                }
      
     if ((a<b) && (c<b))  // new begining
              { 
               if (a+c>b)
              {
               if ((a*a+c*c)>(b*b))
              {
               printf("Acute Triangle"); // 1st case
                }
            else if ((a*a+c*c) == (b*b))
               {
                printf("Right Triangle");// 2nd case
                }
                else if ((a*a+c*c)<(b*b)) 
               {
                  printf("Obtuse Triangle"); //3rd case
                 }
                  }
     else 
       {
         printf("Invalid triangle1"); // defualt
         }           
        }
        
        
     if ((b<a) && (c<a)) // new case
       {
         if (b+c>a) 
          {
            if ((b*b+c*c)>(a*a))  // contion 1
              {  
                printf("Acute Triangle"); 
                }
    else if ((b*b+c*c)==(a*a))  // condtion 2
        {
          printf("Right Triangle");  
           }
     else if ((b*b+c*c)<(a*a))// condition 3
        {
          printf("Obtuse Triangle");  
           }
           }
     else 
        { 
           printf("Invalid triangle");  // default
            }
             }
       
             
       
     return 0;
              }