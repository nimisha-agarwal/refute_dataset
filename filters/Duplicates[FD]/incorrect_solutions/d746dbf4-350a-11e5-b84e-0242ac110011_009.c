/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int N;
int k;
scanf("%d",&N);
int a[N];
for(k=0;k<N;k++){
    scanf("%d",&a[k]);
}
int j;
int i;
for(i=0;i<N-1;i=i+1){
for(j=i+1;j<N;j=j+1){
   if(a[i]==a[j]){
       printf("YES");
   }
   else{
       printf("NO");
   }
}    
}
	return 0;
}