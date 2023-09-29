/*compile-errors:e160_280509.c:30:8: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    if(N>=50){
       ^
e160_280509.c:29:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int s(int t[],int size){
    int i=0;
    int c;
    int x;
    for(i=0;i<size;i++){
        scanf("\n%d",&t[i]);
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
           if(x==1) {
              break;
           }
        
    }
    return x;
}

int main(){
    int N;
    if(N>=50){
        return 0;
    }
    scanf("%d",&N);
    int arry[N];
    
    if(s(arry,N)){
        printf("YES");
    }else{
        printf("NO");
    }
	return 0;
}