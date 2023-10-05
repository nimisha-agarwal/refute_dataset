#include <stdio.h>
#define MAX 50

int main(){
	int A[MAX], n;
	int i, j;
	int duplicate=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%x", &A[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			printf("%d %d\n", A[i], A[j]);
			if (A[i] == A[j]){
				duplicate = 1;
			}
		}
	}
	if (duplicate == 1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}