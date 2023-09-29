/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int arlen_final=0; 
void pattern(int *ar, int start, int end, int n) {
    if(start==end) {
        ar[start]=n; 
        int i; 
        for(i=0; i!=arlen_final; i++) {
            printf("%d", ar[i]);
        }
        return; 
    }
    ar[start]=n; 
    ar[end]=n;
    pattern(ar,start+1,end-1,n-5);
} 



int main(){
    pattern(5); 
	return 0;
}