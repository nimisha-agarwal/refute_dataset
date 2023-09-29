/*compile-errors:e158_278081.c:8:13: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    while(i<b) {
            ^
e158_278081.c:4:12: note: initialize the variable 'b' to silence this warning
    int a,b,i,count;//declaration of variables.
           ^
            = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num);
int main() {
    int a,b,i,count;//declaration of variables.
    i=2;
    count=0;
    scanf("%d",&a);//scan the input.
    while(i<b) {
        count=count+(((b%i)==0)&&(((b+2)%i)==0));
        i=i+1;
        printf("%d",count);
    }
    return 0;
}