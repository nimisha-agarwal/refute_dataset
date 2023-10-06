/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pattern(int n,int i,int k){
    if(i==1){
    if(k>0){
     printf("%d ",k);
     pattern(n,i,k-5);
    }
    else{
        printf("%d",k);
        if(i==0){
            pattern(n,i,k+5);
        }
        
    }
    if(k<n){
        printf("%d ",i+5);
    }
    }
    
    


    
    
    
    return;
}
int main(){
    int n,m;
    scanf("%d",&n);
     pattern(n);
	return 0;
}