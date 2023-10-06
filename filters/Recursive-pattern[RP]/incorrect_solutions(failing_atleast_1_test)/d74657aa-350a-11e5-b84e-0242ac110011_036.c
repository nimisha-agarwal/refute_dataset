/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n1;
void seq(int n){
    if(n==n1){
        printf("%d ",n1);
        return;}
    if((n1>=0)&&(n!=n1)){
       n1=n1-5;
       printf("%d ",n1);
    }
    if((n1<0)&&(n!=n1)){
        n1=n1+5;
        printf("%d ",n1);
    }
    seq(n);
    
}
int main(){
 int n;
 scanf("%d",&n);
    if(n>0)n1=n-5;
    else n1=n+5;
    printf("%d %d ",n,n1);
    seq(n);
    

	return 0;
}