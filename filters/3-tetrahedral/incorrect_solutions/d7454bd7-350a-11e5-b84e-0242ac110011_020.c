/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

    int main() {
    
    int i,n,T=0;
    
    scanf("%d",&n);
    
    for (i=1;i<=n;i=i+1);
        
    T=T+(i*(i+1)/2);
        
    printf("%d",T);
    
    return 0;
}