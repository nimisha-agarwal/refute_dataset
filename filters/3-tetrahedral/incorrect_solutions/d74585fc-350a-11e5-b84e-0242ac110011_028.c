/*compile-errors:e158_277921.c:4:13: warning: variable 'i' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
    int T,S,i,N=0;
    ~~~~~~~~^
e158_277921.c:6:12: note: uninitialized use occurs here
    while (i<=N)
           ^
e158_277921.c:4:14: note: initialize the variable 'i' to silence this warning
    int T,S,i,N=0;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int T,S,i,N=0;
    scanf("%d",&N);
    while (i<=N)
    {
    i = 0;
    S = 0;
    T = 0;
    i++;
    S = S + i;
    T = T + S;
    printf("%d",T);
    }
    
	//Enter your code here
	return 0;
}