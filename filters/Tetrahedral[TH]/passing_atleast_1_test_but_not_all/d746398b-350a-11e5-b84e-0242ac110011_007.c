/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int n, i, s=0, ans=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        s=s+i;
        ans=ans+s;
    printf("%d",ans);
	}return 0;
}