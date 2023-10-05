/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a;
void rec(int x){
    if(x==0){return;}
    else if(x>0){
        printf("%d",x);
        return rec(x-5);
    }
    else if(x<0){
        printf("%d",x);
        return rec(x+5);
    }
    
}

int main(){
    
    scanf("%d",&a);
    rec(a)
	return 0;
}