/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	 int n;
	 scanf("%d",&n);
	 int a[n];
	 for(int i=0;i<n;i++){
	     scanf("%d",&a[i]);
	 }
	 for(int i=0;i<=n;i++){
	     for(int j=n;j>i;j--){
	         if(a[i]==a[j]){
	             printf("YES");
	             break;}
	     }  
	   
	 }
	return 0;
}