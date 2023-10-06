/*execute-result:OK*/
/*compile-errors:e158_277945.c:10:7: warning: variable 's' is uninitialized when used here [-Wuninitialized]
                s=s+v;
                  ^
e158_277945.c:4:11: note: initialize the variable 's' to silence this warning
        int i,N,s,v;
                 ^
                  = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i,N,s,v;
    scanf("%d",&N);
	for (i=0;i<N;i=i+1){
	    v=(i*(i+1)/2);
	    
	  	}
	  	s=s+v;
	printf("%d",s);
	return 0;
}