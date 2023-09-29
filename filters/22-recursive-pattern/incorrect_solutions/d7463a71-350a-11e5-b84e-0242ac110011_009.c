/*compile-errors:e175_306035.c:15:13: warning: variable 'i' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
    else if(x<=0){
            ^~~~
e175_306035.c:19:8: note: uninitialized use occurs here
    if(i<=x){
       ^
e175_306035.c:15:10: note: remove the 'if' if its condition is always true
    else if(x<=0){
         ^~~~~~~~
e175_306035.c:12:8: warning: variable 'i' is used uninitialized whenever 'if' condition is true [-Wsometimes-uninitialized]
    if(x>0){
       ^~~
e175_306035.c:19:8: note: uninitialized use occurs here
    if(i<=x){
       ^
e175_306035.c:12:5: note: remove the 'if' if its condition is always false
    if(x>0){
    ^~~~~~~~
e175_306035.c:11:10: note: initialize the variable 'i' to silence this warning
    int i;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a;
void positive_rec(int x){
    if((x==0)||(x<0)){return;}
    else if(x>0){
        printf("%d ",x);
        positive_rec(x-5);
    }
}
void negative_rec(int x){
    int i;
    if(x>0){
        negative_rec(x-5);
    }
    else if(x<=0){
        printf("%d",x);
        i=x;
    }
    if(i<=x){
        negative_rec(x+5);
        printf("%d",i);
    }
}
int main(){
    scanf("%d",&a);
    positive_rec(a);
    negative_rec(a);
	return 0;
}