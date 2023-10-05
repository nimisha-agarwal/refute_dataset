/*execute-result:OK*/
/*compile-errors:e175_305989.c:5:14: warning: unused parameter 'n' [-Wunused-parameter]
void xyz(int n,int c){
             ^
e175_305989.c:5:20: warning: unused parameter 'c' [-Wunused-parameter]
void xyz(int n,int c){
                   ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int N;

void xyz(int n,int c){
    /*if(n!=N || c==0){
        
    
    if(n>0){
        printf("%d ",n);
        xyz(n-5,1);
    }
    else{
        printf("%d ",n);
        xyz(n+5,1);
        }
    }
    else{
        return;
    }*/
    printf("%d",N);
}

int main(){
	int n;
	scanf("%d",&n);
	N=n;
	xyz(n,0);
	return 0;
}