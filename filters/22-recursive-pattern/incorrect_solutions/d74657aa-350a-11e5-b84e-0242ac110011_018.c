/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void seq(int n,int n1,int d){
    printf("%d ",n1);
    if((n==n1)&&(d=0))
    {
        return;
        
    }
    if(d==1){
       if(n1-5>0)
        seq(n,n1-5,1);
       else
        seq(n,n1-5,0);
    }
    else{
        seq(n,n1+5,0);
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    seq(n,n,1);
	return 0;
}