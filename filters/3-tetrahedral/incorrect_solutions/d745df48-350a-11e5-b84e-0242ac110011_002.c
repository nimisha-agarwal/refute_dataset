/*execute-result:TL*/
/*compile-errors:e158_277936.c:5:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
e158_277936.c:5:16: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    scanf("%d",n);
               ^
e158_277936.c:4:10: note: initialize the variable 'n' to silence this warning
    int n;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int n;
    scanf("%d",n);
  
 while(n>=1)
printf("%d/n",n);
	//Enter your co
	return 0;
}