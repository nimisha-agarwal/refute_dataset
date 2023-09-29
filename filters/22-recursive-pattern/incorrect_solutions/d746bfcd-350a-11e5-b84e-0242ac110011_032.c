/*execute-result:TL*/
/*compile-errors:e175_306051.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306051.c:17:10: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
        seq (a,n);
             ^
e175_306051.c:14:9: note: initialize the variable 'a' to silence this warning
        int n,a; 
               ^
                = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int seq(int a,int n){
 
 a=n;
 printf("%d",a);
 if(n%5==0){
     return seq(a,n-5);
 }
  
}

int main(){
	int n,a; 
	scanf("%d",&n);
   
   	seq (a,n);
	
	return 0;
}