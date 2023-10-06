/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pat(int n,int i){
    int a[10];
    int x = n-5;
    if(i<=4)return pat(n-5,i+1);
    
    
    
    
}

int main(){
    int x;
    scanf("%d",&x);
    
	return 0;
}