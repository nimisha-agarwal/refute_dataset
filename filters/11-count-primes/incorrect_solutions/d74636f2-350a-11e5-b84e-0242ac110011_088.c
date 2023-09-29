/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int main() {
    int a,i,count;//declaration of variables.
    int b=2;//prime number.
    i=2;
    count=0;
    scanf("%d",&a);//scan the input.
    while (b<=a) {
    while (i<=(b-1)) {
        count=count+(((b%i)==0)&&(((b+2)%i)==0));
        i=i+1;
        printf("%d",count);
    }
    }
    return 0;
}