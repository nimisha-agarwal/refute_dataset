/*compile-errors:e158_277959.c:6:22: warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
        for(i = 0; i<=n; i=i++){
                          ~ ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i;int b;int n;
	scanf("%d",&n);
	for(i = 0; i<=n; i=i++){
	    b = ((i-i)*(i) + (i-i+1)*(i+1) +(i)*(i+1))/2;
	    printf("%d",b);
	}
	
	return 0;
}