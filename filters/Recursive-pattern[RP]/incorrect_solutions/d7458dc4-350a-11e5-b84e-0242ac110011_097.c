/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f=x;
    if(x<=0)
    return (f);
    else
    f=x-rec(x-5);
    return(f);
    
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
   int f=rec(n); 
printf("%d",f);
	return 0;
}