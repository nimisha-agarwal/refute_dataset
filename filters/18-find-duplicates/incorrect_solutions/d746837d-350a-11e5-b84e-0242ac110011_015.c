/*compile-errors:e160_280522.c:8:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e160_280522.c:13:6: warning: unused variable 'a' [-Wunused-variable]
        int a[n];
            ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int enter(int n){
    int t[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
    }
}

int main() {
	int n;
	scanf("%d/n",&n);
	int a[n];
	
	return 0;
}