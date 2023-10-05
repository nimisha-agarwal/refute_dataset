/*compile-errors:e175_306043.c:18:18: warning: variable 'n1' is uninitialized when used here [-Wuninitialized]
    printf("%d ",n1);
                 ^~
e175_306043.c:14:11: note: initialize the variable 'n1' to silence this warning
 int n, n1;
          ^
           = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int seq(int n,int n1){
    if(n==n1)return 0;
    printf("%d",n1);
    if(n1>=0){
       seq(n,n+5);
    }
    else{
        seq(n,n-5);
    }
    return n1;
}
int main(){
 int n, n1;
 scanf("%d",&n);
    if(n>0)seq(n,n-5);
    else seq(n,n+5);
    printf("%d ",n1);

	return 0;
}