/*compile-errors:e158_278341.c:11:23: warning: if statement has empty body [-Wempty-body]
            if(p%i!=0);
                      ^
e158_278341.c:11:23: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int p;
int i;
int N;

int check_prime(int N){
    scanf("%d",&N);
    for(p=N;;p++){
        
        for(i=2;i<p;i++){
            if(p%i!=0);
            
        }  
        
    }
        return p;}
            
        
    

            
  

int main(){
 scanf("%d",&N);
 int check_prime(int N);
 printf("%d",p);
 
    return 0;
}

