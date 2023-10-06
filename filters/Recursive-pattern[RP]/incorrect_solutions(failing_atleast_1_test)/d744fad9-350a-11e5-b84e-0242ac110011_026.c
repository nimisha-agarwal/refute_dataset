/*compile-errors:e175_305978.c:14:4: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
   f1(int n){
   ^~
e175_305978.c:23:9: warning: control may reach end of non-void function [-Wreturn-type]
        }
        ^
2 warnings generated.*/
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
        int x;
        x=n;
        printf("%d",x);
        if(x>0){
            return 0;}
            else{
                f2(x+5);
            }
        }
    
    



int main(){
    int n;
    scanf("%d",&n);
   f2(n);
	return 0;
}