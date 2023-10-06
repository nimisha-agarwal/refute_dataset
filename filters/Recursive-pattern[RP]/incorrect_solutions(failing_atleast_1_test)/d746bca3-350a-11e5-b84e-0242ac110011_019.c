/*compile-errors:e175_306049.c:10:27: warning: expression result unused [-Wunused-value]
        for(;n<=original;n+5){
                         ~^~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void sub(int n,int original){
    printf("%d",n);
    if (n>0 && n<=original){
        printf("%d",n);
        n=n-5;
    }
    if (n<=0){
        printf("%d",n);
        for(;n<=original;n+5){
            printf("%d",n);
        }
        return;
    }
    else {
        return;
    }
    return sub(n,original);
}
int main(){
    int n,original;
    scanf("%d",&n);
    original=n;
    sub(n,original);
	return 0;
}