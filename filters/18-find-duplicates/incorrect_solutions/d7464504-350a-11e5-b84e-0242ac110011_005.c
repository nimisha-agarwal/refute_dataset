/*compile-errors:e160_280509.c:20:16: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
           if(x=1) {
              ~^~
e160_280509.c:20:16: note: place parentheses around the assignment to silence this warning
           if(x=1) {
               ^
              (  )
e160_280509.c:20:16: note: use '==' to turn this assignment into an equality comparison
           if(x=1) {
               ^
               ==
e160_280509.c:36:9: warning: implicit declaration of function 'print' is invalid in C99 [-Wimplicit-function-declaration]
        print("NO");
        ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int s(int t[],int size){
    int i=0;
    int c;
    int x;
    for(i=0;i<size;i++){
        scanf("%d",&t[i]);
        c=t[i];
        int j=0;
        
        for(j=0;j<i;j++){
            if(c==t[j]){
                x=1;
                break;
            }else{
                x=0;
                continue;
                }
        }
           if(x=1) {
              break;
           }
        
    }
    return x;
}

int main(){
    int N;
    scanf("%d",&N);
    int arry[50];
    
    if(s(arry,N)){
        printf("YES");
    }else{
        print("NO");
    }
	return 0;
}