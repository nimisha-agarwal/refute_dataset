/*compile-errors:e160_280463.c:4:7: warning: unused variable 'j' [-Wunused-variable]
int i,j,N; 
      ^
e160_280463.c:5:11: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
int array[N]; 
          ^
e160_280463.c:4:10: note: initialize the variable 'N' to silence this warning
int i,j,N; 
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int i,j,N; 
int array[N]; 
scanf("%d",&N); 
for(i=0;i<N;i=i+1) 
{ 
    printf("\n%d",array[i]); 
}// Fill this area with your code.
	return 0;
}