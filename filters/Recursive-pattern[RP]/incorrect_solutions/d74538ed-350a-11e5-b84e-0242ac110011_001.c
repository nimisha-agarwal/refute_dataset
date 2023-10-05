/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a=0;
void series(int n){
    int b;
    b=n;
    if(a==1){
           if(n<b || n==b){
           printf("%d",n );
           
           n=n+5;
           series(n);
           } 
    }if(a==0){        
          if(n>0){
          printf("%d",n );
          n=n-5;
          series(n);
          }else{
              a=1;
              series(n) ;
          }
    
    
    }       
    
}
int main(){
    int n;
    scanf("%d",&n);
    series(n);
	return 0;
}