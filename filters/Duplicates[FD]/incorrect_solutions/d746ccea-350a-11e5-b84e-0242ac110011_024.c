/*execute-result:OK*/
/*compile-errors:e160_280527.c:4:9: warning: unused variable 'j' [-Wunused-variable]
         int n,j;
               ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	 int n,j;
	 scanf("%d",&n);
	 int a[n];
	 for(int i=0;i<n;i++){
	     scanf("%d",&a[i]);
	 }
	 for(int i=0;i<n;i++){
	     for(int j=n;j>i;j--){
	         if(a[i]==a[j]){
	             printf("YES");
	             break;}
	     }  
	   if(i==n-1){printf("NO");}
	 }
	return 0;
}