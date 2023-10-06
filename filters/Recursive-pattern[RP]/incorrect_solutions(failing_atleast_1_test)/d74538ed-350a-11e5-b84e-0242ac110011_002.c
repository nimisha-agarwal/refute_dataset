/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a=0;
void series(int n){
    if(a==1){
           if(n<0 || n==0){
           printf("%d",n );
           a=1;
           n=n+5;
           series(n);
            }
    }if(a==0){        
          if(n>0){
          printf("%d",n );
          n=n-5;
          series(n);
          }
    
    
    }       
    
}
int main(){
    int n;
    scanf("%d",&n);
    series(n);
	return 0;
}