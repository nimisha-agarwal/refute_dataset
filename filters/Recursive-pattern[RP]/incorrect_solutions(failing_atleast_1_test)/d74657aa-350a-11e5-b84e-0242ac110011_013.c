/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void seq(int n,int n1){
    if(n==n1)return;
    printf("%d",n1);
    if(n1>=0){
       seq(n,n+5);
    }
    else{
        seq(n,n-5);
    }
}
int main(){
 int n;
 scanf("%d",&n);
    if(n>0)seq(n,n-5);
    else seq(n,n+5);

	return 0;
}