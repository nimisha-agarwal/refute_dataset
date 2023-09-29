/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int n){
   int i;
   for(i=1;i<n;i++) 
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
        if(l!=0) break; 
    }
    printf("%d",l);
    return 0;
}
