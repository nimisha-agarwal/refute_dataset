/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int n, i, s=0, ans=0;
    scanf("%d",&n);
    for(i=0; i<=n-1; i++){
        s=s+i;
        ans=ans+s;
    printf("%d",ans);
	}return 0;
}