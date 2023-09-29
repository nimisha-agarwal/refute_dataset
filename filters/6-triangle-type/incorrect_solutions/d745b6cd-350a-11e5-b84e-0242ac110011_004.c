/*execute-result:OK*/
/*compile-errors:e156_271836.c:25:16: warning: variable 'min' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
            if(c>a) {
               ^~~
e156_271836.c:35:23: note: uninitialized use occurs here
    printf("%d %d %d",min,mid,max);
                      ^~~
e156_271836.c:25:13: note: remove the 'if' if its condition is always true
            if(c>a) {
            ^~~~~~~~
e156_271836.c:4:26: note: initialize the variable 'min' to silence this warning
    int a,b,c,max,mid,min; 
                         ^
                          = 0
e156_271836.c:25:16: warning: variable 'mid' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
            if(c>a) {
               ^~~
e156_271836.c:35:27: note: uninitialized use occurs here
    printf("%d %d %d",min,mid,max);
                          ^~~
e156_271836.c:25:13: note: remove the 'if' if its condition is always true
            if(c>a) {
            ^~~~~~~~
e156_271836.c:4:22: note: initialize the variable 'mid' to silence this warning
    int a,b,c,max,mid,min; 
                     ^
                      = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main() {
    int a,b,c,max,mid,min; 
    scanf("%d %d %d",&a,&b,&c);
    //First lets sort the sides as per size
    if(a>b) {
        if(a>c) {
            max=a; 
            if(b>c) {
                mid=b; 
                min=b; 
            } else {
                min=b; 
                mid=c; 
            }
        } else {
            max=c; 
            min=b; 
            mid=a; 
        }
    } else {
        if(b>c) {
            max=b; 
            if(c>a) {
                mid=c; 
                min=a;
            }
        } else {
            max=c; 
            mid=b; 
            min=a; 
        }
    }
    printf("%d %d %d",min,mid,max);
}