/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int N,d=1;

void xyz(int n,int c){
    if(n!=N || c==0){
        
    
    if(n>0 && d!=0){
        printf("%d ",n);
        xyz(n-5,1);
    }
    else{
        d=0;
        printf("%d ",n);
        xyz(n+5,1);
        }
    }
    else{
        return;
    }
    
}

int main(){
	int n;
	scanf("%d",&n);
	N=n;
	xyz(n,0);
	return 0;
}