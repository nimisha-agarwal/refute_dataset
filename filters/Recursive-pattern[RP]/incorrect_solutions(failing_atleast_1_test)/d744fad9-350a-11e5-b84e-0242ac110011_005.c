/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int a;
int f2(int n){
    printf("%d",n);
    if(n==a){
        return 0;
    }
    else{
        return f2(n+5);
    }
}

   f1(int n){
        int m;
        m=n;
        printf("%d",m);
        if(m>0){
            return 0;}
            else{
               return f2(m+5);
            }
        }
    
    



int main(){
    int n;
    scanf("%d",&n);
   f2(n);
	return 0;
}