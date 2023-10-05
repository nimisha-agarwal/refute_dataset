/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void series(int i,int n){
    int a[100];
    a[0]=n;
    if(a[i]<0){
        printf{"%d",series (i-1,n)+5};
    }else{
        printf{"%d",series (i-1,n)-5};
    }
        
    
}
int main(){
    int n;
    scanf("%d",&n);
    series(0,n);
	return 0;
}