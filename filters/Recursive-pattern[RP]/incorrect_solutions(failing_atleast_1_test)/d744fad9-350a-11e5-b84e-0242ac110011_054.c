/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int a;
int f2(int n){
    printf("%d",n);
    if(n==a)
        return 0;
    
        return f2(n+5);
    
}

  int f1(int n){
        int m;
        m=n;
        printf("%d",m);
        if(m>0){
            return f1(n-5);}
            else{
               return f2(m+5);
            }
        }
    
    



int main(){
    int n;
    scanf("%d",&n);
    if (n>0)
   f2(n);
	return 0;
}