/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n1;
int seq(int n){
    if(n==n1)return 0;
    printf("%d",n1);
    if(n1>=0){
       n1=n1+5;
    }
    else{
        n1=n1-5;
    }
    seq(n1);
    return n1;
}
int main(){
 int n;
 scanf("%d",&n);
    if(n>0)n1=n-5;
    else n1=n+5;
    
    printf("%d ",seq(n1));

	return 0;
}