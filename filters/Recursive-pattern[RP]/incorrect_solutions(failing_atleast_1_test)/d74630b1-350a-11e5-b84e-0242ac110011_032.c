/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
    int a[100];

int pat(int n,int q,int i){
    a[i]=n;
    
    a[q-i-1]=n;
             return pat(n-5,q,i+1);

    
}

int main(){
    int x;
    scanf("%d",&x);
    int q;
    if(x%5==0)q = 2*(x/5) + 1;
    else{
        q = (x/5) + 3;
    }

    
    int i=0;
    int ans = pat(x,q,i);
    for(i=0;i<q;i++){
        printf("%d ",a[i]);
    }
    
    
    
	return 0;
}