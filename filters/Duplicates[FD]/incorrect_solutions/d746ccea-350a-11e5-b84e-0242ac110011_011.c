/*execute-result:OK*/
/*compile-errors:e160_280527.c:16:16: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
           if(a[i]==a[j])break;
                      ^
e160_280527.c:4:10: note: initialize the variable 'j' to silence this warning
         int n,j;
                ^
                 = 0
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
	 for(int i=0;i<=n;i++){
	     for(int j=n;j>i;j--){
	         if(a[i]==a[j]){
	             printf("YES");
	             break;}
	     }  
	   if(a[i]==a[j])break;
	   if(i==n)printf("NO");
	 }
	return 0;
}