/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    if(p+q<r||q+r<p||r+p<q){
        printf("Invalid Triangle");
    }
    if(r*r<p*p+q*q){
        printf("Acute Triangle");}
  else  if(r*r==p*p+q*q){
    printf("Right Triangle");}
   else if(r*r>p*p+q*q && p+q>=r){
        printf("Obtuse Triangle");}
    
    return 0;
}