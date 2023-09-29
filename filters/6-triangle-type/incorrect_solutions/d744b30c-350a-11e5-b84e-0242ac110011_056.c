/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    if(r*r<p*p+q*q){
        printf("acute");}
    if(r*r==p*p+q*q){
    printf("right");}
    if(r*r>p*p+q*q){
        printf("obtuse");}
    else{
    printf("Invalid Triangle");}
    return 0;
}