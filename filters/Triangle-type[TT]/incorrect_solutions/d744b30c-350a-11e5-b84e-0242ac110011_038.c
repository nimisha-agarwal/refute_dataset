/*compile-errors:e156_271785.c:11:24: warning: '&&' within '||' [-Wlogical-op-parentheses]
   else if(r*r>p*p+q*q && p+q>=r||q+r>=p||r+p>=q){
           ~~~~~~~~~~~~^~~~~~~~~~~
e156_271785.c:11:24: note: place parentheses around the '&&' expression to silence this warning
   else if(r*r>p*p+q*q && p+q>=r||q+r>=p||r+p>=q){
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
    if(r*r<p*p+q*q){
        printf("Acute Triangle");}
  else  if(r*r==p*p+q*q){
    printf("Right Triangle");}
   else if(r*r>p*p+q*q && p+q>=r||q+r>=p||r+p>=q){
        printf("Obtuse Triangle");}
    else{
    printf(" Invalid Triangle");}
    return 0;
}