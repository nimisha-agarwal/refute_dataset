/*compile-errors:e160_280530.c:23:18: warning: equality comparison result unused [-Wunused-comparison]
                v==1;
                ~^~~
e160_280530.c:23:18: note: use '=' to turn this equality comparison into an assignment
                v==1;
                 ^~
                 =
e160_280530.c:4:9: warning: variable 'N' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
    int N;
    ~~~~^
e160_280530.c:6:11: note: uninitialized use occurs here
    while(N<=50){
          ^
e160_280530.c:4:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N;
    int a[50];
    while(N<=50){
        scanf("%d",&N);
    }
    
    
    int v=0;
    int i;
    int j;
    
    for(i=0;i<=N-1;i++)
    
    {
        for(j=0;j<=N-1;j++)
    
        {
            if(a[i]==a[j] && i!=j)
            {
                v==1;
                
            } 
            
        }
    }    
        
    
      if(v==1)
     {
         printf("YES");
     }
          else
          {
              printf("NO");
          }
                
            
             
              
        
    
    

	
	

	   
	
	return 0;
}