/*compile-errors:e158_278309.c:12:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int n){
 if (n!=1) {   
   int i;
   for(i=2;i<n;i++) 
    {
        if (n%i==0)
            return 0;
    }
    return n; }
}
int main(){
    int i,l,n;
    scanf("%d",&n);
    for(i=n;;i++){
        l=check_prime(i);
        if(l!=0) break; 
    }
    printf("%d",l);
    return 0;
}
