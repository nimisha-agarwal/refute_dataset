/*compile-errors:e158_277959.c:9:11: warning: multiple unsequenced modifications to 'b' [-Wunsequenced]
            b = b++;
              ~  ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i;int b;int n;
	scanf("%d",&n);
	for(i = 0; i<=n; i++){
	    b = (i*(i+1))/2;
	    printf("%d",b);
	    b = b++;
	}
	
	
	return 0;
}