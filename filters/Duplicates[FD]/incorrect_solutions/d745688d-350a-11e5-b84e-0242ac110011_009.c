/*compile-errors:e160_280463.c:5:5: warning: unused variable 'array' [-Wunused-variable]
int array[N]; 
    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int i,N=50; 
int array[N]; 
scanf("%d",&N); 
for(i=0;i<N;i=i+1) 
 
{ 
    printf("\n%d",N); 
}// Fill this area with your code.
	return 0;
}