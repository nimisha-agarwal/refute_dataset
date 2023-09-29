/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void equal_check(int b[],int n){
    int i,j,t;
    t=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]==b[j]){t=1;break;}
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