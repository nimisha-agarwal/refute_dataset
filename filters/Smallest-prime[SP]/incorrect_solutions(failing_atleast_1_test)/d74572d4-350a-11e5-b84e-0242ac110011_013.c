/*execute-result:OK*/
/*compile-errors:e158_278309.c:18:14: warning: if statement has empty body [-Wempty-body]
    if(l!=0) ;break; 
             ^
e158_278309.c:18:14: note: put the semicolon on a separate line to silence this warning
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int n){
   int i;
   for(i=2;i<n;i++) 
    {
        if (n%i==0)
            return 0;
    }
    return n;
}
int main(){
    int i,l,n;
    scanf("%d",&n);
     
    for(i=n;;i++){
        l=check_prime(i);
    if(l!=0) ;break; 
    }
    printf("%d",l);
    return 0;
}
