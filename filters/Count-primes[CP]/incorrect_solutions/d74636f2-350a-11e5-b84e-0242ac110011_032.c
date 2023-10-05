/*compile-errors:e158_278081.c:9:15: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    while(i<=(b-1)) {
              ^
e158_278081.c:5:10: note: initialize the variable 'b' to silence this warning
    int b;//prime number
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num);
int main() {
    int a,i,count;//declaration of variables
    int b;//prime number
    i=2;
    count=0;
    scanf("%d",&a);//scan the input.
    while(i<=(b-1)) {
        count=count+(((b%i)==0)&&(((b+2)%i)==0));
        i=i+1;
        printf("%d",count);
    }
    return 0;
}