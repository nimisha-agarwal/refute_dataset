/*execute-result:RT*/
/*compile-errors:e175_306014.c:25:13: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
    pattern(array,0,arlen_final-1,n); 
            ^~~~~
            &
e175_306014.c:4:19: note: passing argument to parameter 'ar' here
void pattern(int *ar, int start, int end, int n) {
                  ^
e175_306014.c:25:13: warning: variable 'array' is uninitialized when used here [-Wuninitialized]
    pattern(array,0,arlen_final-1,n); 
            ^~~~~
e175_306014.c:21:14: note: initialize the variable 'array' to silence this warning
    int array; 
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int arlen_final=7; 
void pattern(int *ar, int start, int end, int n) {
    if(start==end) {
        ar[start]=n; 
        int i; 
        for(i=0; i!=arlen_final; i++) {
            printf("%d ", ar[i]);
        }
        return; 
    }
    ar[start]=n; 
    ar[end]=n;
    pattern(ar,start+1,end-1,n-5);
} 



int main(){
    int array; 
    int n=0; 
    scanf("%d",&n);
    arlen_final = (n/5) +1; 
    pattern(array,0,arlen_final-1,n); 
	return 0;
}