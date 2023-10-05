/*compile-errors:e158_277959.c:6:22: warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
        for(i = 0; i<=n; i=i++){
                          ~ ^
e158_277959.c:9:11: warning: multiple unsequenced modifications to 'b' [-Wunsequenced]
            b = b++;
              ~  ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i;int b;int n;
	scanf("%d",&n);
	for(i = 0; i<=n; i=i++){
	    b = (i*(i+1))/2;
	    printf("%d",b);
	    b = b++;
	}
	
	
	return 0;
}