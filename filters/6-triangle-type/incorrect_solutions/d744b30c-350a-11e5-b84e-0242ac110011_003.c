/*execute-result:OK*/
/*compile-errors:e156_271785.c:14:50: warning: '&&' within '||' [-Wlogical-op-parentheses]
   else if(r*r>p*p+q*q||p*p>q*q+r*r||q*q>p*p+r*r && p+q>=r){
                                   ~~~~~~~~~~~~~~^~~~~~~~~
e156_271785.c:14:50: note: place parentheses around the '&&' expression to silence this warning
   else if(r*r>p*p+q*q||p*p>q*q+r*r||q*q>p*p+r*r && p+q>=r){
                                                 ^
                                     (                    )
1 warning generated.*/
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
    if(r*r<p*p+q*q||p*p<q*q+r*r||q*q<p*p+r*r){
        printf("Acute Triangle");}
  else  if(r*r==p*p+q*q||p*p==q*q+r*r||q*q==r*r+p*p){
    printf("Right Triangle");}
   else if(r*r>p*p+q*q||p*p>q*q+r*r||q*q>p*p+r*r && p+q>=r){
        printf("Obtuse Triangle");}
    
    return 0;
}