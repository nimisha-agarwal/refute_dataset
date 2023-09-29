/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a;
int rec(int x){
    if(x==0){return 0;}
    else{
        return rec(x-5);
    }
    
    
}

int main(){
    
    scanf("%d",&a);
    printf("%d",rec(a));
	return 0;
}