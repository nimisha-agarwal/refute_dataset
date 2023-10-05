/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int a, f=1;
for( a=2;a<num;a++) {
    if(num%a==0){
  f=0;
  break;}
 
}
return f;

}
int main(){ 
int b,d=0;
int c;
scanf("%d",&b);
 for(c=2;c<=b-2;c++){
     
     if(check_prime(c)){
         if(check_prime(c+2)){
             d=d+1;
         }
     }
     //printf("%d",d);
 }   
   printf("%d",d); 
    return 0;
}