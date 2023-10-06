/*execute-result:TL*/
/*compile-errors:e160_280534.c:15:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
   if(a[i]=a[j]){
      ~~~~^~~~~
e160_280534.c:15:11: note: place parentheses around the assignment to silence this warning
   if(a[i]=a[j]){
          ^
      (        )
e160_280534.c:15:11: note: use '==' to turn this assignment into an equality comparison
   if(a[i]=a[j]){
          ^
          ==
e160_280534.c:14:16: warning: expression result unused [-Wunused-value]
for(j=i+1;j<N;j+1){
              ~^~
e160_280534.c:13:16: warning: expression result unused [-Wunused-value]
for(i=0;i<N-1;i+1){
              ~^~
3 warnings generated.*/
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
for(i=0;i<N-1;i+1){
for(j=i+1;j<N;j+1){
   if(a[i]=a[j]){
       printf("YES");
   }
   else{
       printf("NO");
   }
}    
}
	return 0;
}