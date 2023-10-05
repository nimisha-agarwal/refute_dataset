/*execute-result:TL*/
/*compile-errors:e160_280534.c:14:6: warning: expression result unused [-Wunused-value]
for(j>i;j<N-1;j+1){
    ~^~
e160_280534.c:14:16: warning: expression result unused [-Wunused-value]
for(j>i;j<N-1;j+1){
              ~^~
e160_280534.c:13:14: warning: expression result unused [-Wunused-value]
for(i=0;i<N;i+1){
            ~^~
e160_280534.c:14:5: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
for(j>i;j<N-1;j+1){
    ^
e160_280534.c:11:6: note: initialize the variable 'j' to silence this warning
int j;
     ^
      = 0
e160_280534.c:6:7: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
int a[N];
      ^
e160_280534.c:4:6: note: initialize the variable 'N' to silence this warning
int N;
     ^
      = 0
5 warnings generated.*/
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
for(i=0;i<N;i+1){
for(j>i;j<N-1;j+1){
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