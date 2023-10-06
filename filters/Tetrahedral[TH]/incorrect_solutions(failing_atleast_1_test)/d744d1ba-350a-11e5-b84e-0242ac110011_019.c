/*compile-errors:e158_277893.c:4:19: warning: unused variable 'tet_sum' [-Wunused-variable]
        int j, N, sum=0, tet_sum=0;
                         ^
e158_277893.c:6:16: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
                while(j>0) 
                      ^
e158_277893.c:4:7: note: initialize the variable 'j' to silence this warning
        int j, N, sum=0, tet_sum=0;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int j, N, sum=0, tet_sum=0;
	scanf("%d", &N);
	        while(j>0) 
	        {
	            sum=sum+j;
	            j--;         //summation(n).
	        }
	printf("%d", j);
	return 0;
}