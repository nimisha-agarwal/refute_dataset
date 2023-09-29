/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void seq(int N)
    {
        int a;
        if(N<=0)
          {
              printf("%d",N);
              return;
          }      
        else
          {
              printf("%d",N);
              a=N-5;
              seq(a);
              printf("%d",N);
          }
    }
int main(){
    
    int n;
    scanf("%d",&n);
    seq(n);
    
    
    
    
    
	return 0;
}