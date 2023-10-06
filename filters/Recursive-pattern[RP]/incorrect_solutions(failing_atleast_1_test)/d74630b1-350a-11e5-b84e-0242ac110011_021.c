/*compile-errors:e175_306033.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306033.c:9:7: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    a[i+1]=n-5;
      ^
e175_306033.c:6:10: note: initialize the variable 'i' to silence this warning
    int i;
         ^
          = 0
e175_306033.c:30:9: warning: unused variable 'ans' [-Wunused-variable]
    int ans = pat(x,q);
        ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
    int a[100];

int pat(int n,int q){
    a[0]=n;
    int i;
    a[q-1]=n;
    
    a[i+1]=n-5;
    for(i=0;i<(q/2)+1;i++){
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
    for(i=0;i<q;i++){
        printf("%d ",a[i]);
    }
    
    
    
	return 0;
}