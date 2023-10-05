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
e160_280534.c:6:7: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
int a[N];
      ^
e160_280534.c:4:6: note: initialize the variable 'N' to silence this warning
int N;
     ^
      = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int N;
int k;
int a[N];
scanf("%d",&N);
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