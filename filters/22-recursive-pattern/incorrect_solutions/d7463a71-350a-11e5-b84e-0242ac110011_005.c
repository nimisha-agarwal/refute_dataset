/*execute-result:TL*/
/*compile-errors:e175_306035.c:5:8: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    if(n>a){return;}
       ^
e175_306035.c:4:10: note: initialize the variable 'n' to silence this warning
    int n;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a;
void rec(int x){
    int n;
    if(n>a){return;}
    n=x;
    printf("%d",n);
    rec(x-5);
    
}

int main(){
    
    scanf("%d",&a);
    rec(a);
	return 0;
}