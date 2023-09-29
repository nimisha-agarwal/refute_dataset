/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void func(int n,int k){
    printf("%d ",n);
    if(n>0){
        if(k==1)func(n-5,1);
        if(k==0)func(n+5,0);
    }
    else{
        func(n+5,0);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    func(n,1);
    
	return 0;
}