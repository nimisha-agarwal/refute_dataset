/*compile-errors:e158_278039.c:7:11: warning: expression result unused [-Wunused-value]
    for(p1<=3;p1<=n;p1+2){
        ~~^ ~
e158_278039.c:7:23: warning: expression result unused [-Wunused-value]
    for(p1<=3;p1<=n;p1+2){
                    ~~^~
e158_278039.c:7:9: warning: variable 'p1' is uninitialized when used here [-Wuninitialized]
    for(p1<=3;p1<=n;p1+2){
        ^~
e158_278039.c:5:13: note: initialize the variable 'p1' to silence this warning
    int n,p1;
            ^
             = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int main(){
    int n,p1;
    scanf("%d",&n);
    for(p1<=3;p1<=n;p1+2){
        printf("(%d,%d)",p1,p1+2);
    }
    return 0;
}