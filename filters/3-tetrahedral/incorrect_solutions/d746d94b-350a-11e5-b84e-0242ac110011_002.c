/*compile-errors:e158_277987.c:8:13: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        for(i=1;i<=N;i++){
                   ^
e158_277987.c:5:7: note: initialize the variable 'N' to silence this warning
        int N;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int sum=0;
	int N;
	int i;
	int j;
	for(i=1;i<=N;i++){
	    for(j=1;j<=i;j++){
	        sum = sum +j;
	    }
	}
	printf("%d",sum);
	return 0;
}