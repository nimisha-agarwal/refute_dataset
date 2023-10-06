/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
#define AR_MAX 100
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
    int array[AR_MAX]; 
    int n=0; 
    scanf("%d",&n);
    arlen_final = (n/5 + 1)*2 +1; 
    pattern(array,0,arlen_final-1,n); 
	return 0;
}