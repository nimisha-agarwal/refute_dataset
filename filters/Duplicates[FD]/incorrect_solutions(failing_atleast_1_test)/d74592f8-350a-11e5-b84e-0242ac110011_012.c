/*execute-result:OK*/
/*compile-errors:e160_280474.c:4:13: warning: unused variable 't' [-Wunused-variable]
    int i,j,t;
            ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int equal_check(int b[],int n){
    int i,j,t;
    return 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]==b[j]){return 1;break;}
        }
    }
}
int main() {
    int a[100];
    int n,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i-1]);
        }
    
	
	return 0;
}