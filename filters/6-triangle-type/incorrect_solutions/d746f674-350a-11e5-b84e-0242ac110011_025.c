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
  if((a+b<c)||(b+c<a)||(c+a<b)){  /*condition for invalid triangle*/
       printf("Invalid Triangle");
} 
  else if((a*a+b*b)>c*c&&(b*b+c*c)>a*a&&(a*a+c*c)>b*b) 
{                                                     /*acute                                                               angle condition*/
       printf("Acute Triangle");
     
}
  else if((a*a+b*b)==c*c||(b*b+c*c)==a*a||(a*a+c*c)==b*b)
{
       printf("Right Triangle");  /*right angle condition*/

}
  else if((a*a+b*b)<c*c||(b*b+c*c)<a*a||(a*a+c*c)<b*b){
        printf("Obtuse Triangle");  /*obtuse angle condition*/
              
         
}
    return 0;
}