/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//Complete function definitions

int main(){
    int given,j; 
    scanf("%d", &given); 
    j=given; 
    while(check_prime(j)!=1) {
        j+=1; 
    }
    printf("%d", check_prime(j));
    //Write your code here
    
    return 0;
}

int check_prime(int n) {
    if(n==1) return 0; 
    if(n==2 || n==3) return 1; 
    if(n%6!=1 && n%6!=5) return 0; 
    int i; 
    for(i=2; i*i<=n; i++) {
        if(n%i!=1) return 0; 
    }
    return 1; 
}