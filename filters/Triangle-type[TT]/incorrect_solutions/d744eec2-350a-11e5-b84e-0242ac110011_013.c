/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    int max;
    scanf("%d%d%d",&a,&b,&c);
    if (a <= b){
        if(b >= c){
         max =b;
    } else {
         max=c;
    } } else {
        if (a <= c) {
         max=a;
        } else {
         max=c;
        }
    } 
    printf("%d",max);

    return 0;
}