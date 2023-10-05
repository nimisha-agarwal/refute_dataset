/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

//The function to check whether no. is prime or not
int check_prime(int num){
    int i=2, j=0;
    while(i<=(num/2)){
        if((num%i)==0)
            j++;
            i++;
    }
    if(j!=0)
        return 1;
    else
        return 0;
}

int main(){
    int i, N;
    scanf("%d", &N);
    do{
      i= check_prime(N);
      N++;
    }while(i);
    printf("%d",--N);
    
    return 0;
}