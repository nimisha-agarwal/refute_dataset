/*compile-errors:e160_280534.c:11:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
   if(a[i]=a[j]){
      ~~~~^~~~~
e160_280534.c:11:11: note: place parentheses around the assignment to silence this warning
   if(a[i]=a[j]){
          ^
      (        )
e160_280534.c:11:11: note: use '==' to turn this assignment into an equality comparison
   if(a[i]=a[j]){
          ^
          ==
e160_280534.c:10:6: warning: expression result unused [-Wunused-value]
for(j>i;j<N-1;j+1){
    ~^~
e160_280534.c:10:16: warning: expression result unused [-Wunused-value]
for(j>i;j<N-1;j+1){
              ~^~
e160_280534.c:9:14: warning: expression result unused [-Wunused-value]
for(i=0;i<N;i+1){
            ~^~
e160_280534.c:10:5: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
for(j>i;j<N-1;j+1){
    ^
e160_280534.c:7:6: note: initialize the variable 'j' to silence this warning
int j;
     ^
      = 0
e160_280534.c:5:7: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
int a[N];
      ^
e160_280534.c:4:6: note: initialize the variable 'N' to silence this warning
int N;    
     ^
      = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int N;    
int a[N];
scanf("%d",&N);
int j;
int i;
for(i=0;i<N;i+1){
for(j>i;j<N-1;j+1){
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