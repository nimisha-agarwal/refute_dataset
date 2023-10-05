/*execute-result:OK*/
/*compile-errors:e160_280534.c:25:5: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if(s=0){
   ~^~
e160_280534.c:25:5: note: place parentheses around the assignment to silence this warning
if(s=0){
    ^
   (  )
e160_280534.c:25:5: note: use '==' to turn this assignment into an equality comparison
if(s=0){
    ^
    ==
1 warning generated.*/
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
int s=0;
int i;
for(i=0;i<N-1;i=i+1){
for(j=i+1;j<N;j=j+1){
   if(a[i]==a[j]){
   s=1+s;  
       
   }
   else{
       s=0;
   }
}    
}
if(s=0){
    printf("NO");
}
    else{
        printf("YES");
    }
	return 0;
}