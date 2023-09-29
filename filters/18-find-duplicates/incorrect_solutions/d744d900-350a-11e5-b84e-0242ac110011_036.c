/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int duplicate(int num,int a[n]){
    int count=0;
    int duplicate=0;
    for(;count<n;count++){
        if(num==a[count]){duplicate++;}
        else continue;
    }
    
    return (duplicate=1)?1:0;
}
int main() {
    int n;
    scanf("%d\n",&n);
	int a[n];
	int i=0;
	while(i<n){
	    scanf("%d ",&a[i]);
	}
	int count=0;
	while(count<n){
	    
	return 0;
}
}