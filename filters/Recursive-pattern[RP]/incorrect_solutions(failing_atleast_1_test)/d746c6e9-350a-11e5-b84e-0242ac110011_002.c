/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a[1000];
int n;
int k;
int res(int a[],int f,int n){
    if(n<=0){
        a[f]=n;
        if(n>=k){
            a[f]=k;
            return f;
        }
        res(a,f+1,n+5);
    }
    a[f]=n;
    res(a,f+1,n-5)
}

int main(){int i,m;
scanf("%d",&n);
k=n;
 m=res(a,0,n);
    for(i=0;i<=m;i++){
        printf("%d",a[i]);
    }
    
    
	return 0;
}