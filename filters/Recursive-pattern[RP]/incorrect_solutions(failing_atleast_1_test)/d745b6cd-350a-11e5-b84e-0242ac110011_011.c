/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int arlen_final=7; 
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
    int array[7]; 
    pattern(array,0,6,11); 
	return 0;
}