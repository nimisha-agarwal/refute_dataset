/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    if(p-q<r ||q-r<p ||r-p<q){
        printf("Acute Triangle");}
    if(r*r==p*p+q*q){
    printf("Right Triangle");}
    if(r*r>p*p+q*q){
        printf("Obtuse Triangle");}
    else{
    printf(" Invalid Triangle");}
    return 0;
}