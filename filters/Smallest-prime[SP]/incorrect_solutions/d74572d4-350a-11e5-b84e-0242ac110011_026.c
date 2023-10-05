/*execute-result:OK*/
/*compile-errors:e158_278309.c:17:14: warning: if statement has empty body [-Wempty-body]
    if(l!=0) ;break; 
             ^
e158_278309.c:17:14: note: put the semicolon on a separate line to silence this warning
e158_278309.c:15:20: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
     l=check_prime(i);
                   ^
e158_278309.c:13:10: note: initialize the variable 'i' to silence this warning
    int i,l,n;
         ^
          = 0
2 warnings generated.*/
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
     l=check_prime(i);
    for(i=n;;i++){
    if(l!=0) ;break; 
    }
    printf("%d",l);
    return 0;
}
