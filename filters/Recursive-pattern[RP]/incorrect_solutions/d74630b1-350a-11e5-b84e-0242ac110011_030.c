/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
    int a[100];

int pat(int n,int q){
    a[0]=n;
    int i;
    a[q-1]=n;
    
    a[i+1]=n-5;
    for(i==0;i<(q/2)+1;i++){
        a[i+1] = n - 5;
        a[q-i-1] = a[i+1];
        return pat(n-5,i+1);
    }
     
    
}

int main(){
    int x;
    scanf("%d",&x);
    int q;
    if(x%5==0)q = 2*(x/5) + 1;
    else{
        q = (x/5) + 3;
    }

    
    int i;
    int ans = pat(x,q);
    printf("%d",ans);
    
    
	return 0;
}