/*compile-errors:*/
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
           if(x==1) {
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
        printf("NO");
    }
	return 0;
}