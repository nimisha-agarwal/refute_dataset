/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h> //the code is designed to print the numbers in two parts , firstly in decreasing order and then n increasing order// 
int N;?
void revprint(int n){// function for printing in decreasing order//
    if(n==N) printf("%d ",n);
    else {
        printf("%d ",n);
        revprint(n+5);
    }
}
void print(int n){// function for printing in decreasing order//
    if(n<=0) {printf("%d ",n);return revprint(n+5);}
    else {
        printf("%d ",n);
        print(n-5);
}
    }
int main(){
    scanf("%d",&N);
    // handling special case (N=0)//
    if(N)
    print(N);
    else printf("%d",N);
    
	return 0;
}