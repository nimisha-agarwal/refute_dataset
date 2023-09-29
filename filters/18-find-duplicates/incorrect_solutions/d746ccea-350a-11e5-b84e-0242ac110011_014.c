/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	 int n,j;
	 scanf("%d",&n);
	 int a[n];
	 for(int i=0;i<n;i++){
	     scanf("%d",&a[i]);printf("%d",a[i]);
	 }
	 for(int i=0;i<n;i++){
	     for(j=n-1;j>i;j--){
	         if(a[i]==a[j]){
	             printf("YES");
	             break;}
	     } 
	    if(a[i]==a[j]){break;}
	   if(i==n-1){printf("NO");}
	 }
	return 0;
}