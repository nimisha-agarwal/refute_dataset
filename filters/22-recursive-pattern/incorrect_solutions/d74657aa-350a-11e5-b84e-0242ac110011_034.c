/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void seq(int n1){
    if(n==n1){
        printf("%d ",n1);
        return;}
    if(n1>=0){
       n1=n1-5;
       printf("%d ",n1);
    }
    else{
        n1=n1+5;
        printf("%d ",n1);
    }
    seq(n1);
    
}
int main(){
    int n1;
 scanf("%d",&n);
    if(n>0)n1=n-5;
    else n1=n+5;
    printf("%d %d ",n,n1);
    seq(n1);
    

	return 0;
}