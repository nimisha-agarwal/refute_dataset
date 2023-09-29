/*compile-errors:e156_271785.c:13:13: warning: expression result unused [-Wunused-value]
    else(r*r!=p*p+q*q);{
         ~~~^ ~~~~~~~
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
    if(r*r==p*p+q*q){
    printf("Right Triangle");}
    if(r*r>p*p+q*q){
        printf("Obtuse Triangle");}
    else(r*r!=p*p+q*q);{
    printf(" Invalid Triangle");}
    return 0;
}