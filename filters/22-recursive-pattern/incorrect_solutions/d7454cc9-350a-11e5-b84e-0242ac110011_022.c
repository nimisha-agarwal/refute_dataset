/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int N;

void xyz(int n,int c){
    if(n==N || c!=0){
        return ;
    }
    if(n>0){
        printf("%d ",n);
        xyz(n-5,1);
    }
    else{
        printf("%d ",n);
        xyz(n+5,1);
        }
    
    
}

int main(){
	int n;
	scanf("%d",&n);
	N=n;
	xyz(n,0);
	return 0;
}