/*compile-errors:e175_306033.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306033.c:29:9: warning: unused variable 'i' [-Wunused-variable]
    int i;
        ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pat(int n,int i){
    int a[100];
    a[0]=n;
    a[i+1]=n-5;
    while(a[i]>0){
        return pat(n-1,i+1);
    }
     if(a[i]<=0){
        int p;
        for(p=1;p<=i;p++){
            a[i+p]=a[i-p];
            return a[i+p];
        }
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
    int v=0;
    
    int i;
    int ans = pat(x,v);
    printf("%d",ans);
    
    
	return 0;
}