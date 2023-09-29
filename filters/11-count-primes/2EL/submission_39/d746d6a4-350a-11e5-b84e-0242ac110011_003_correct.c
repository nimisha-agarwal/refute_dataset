/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    /*loop test divisibilty with other nu,mbers for prime checking*/
    for(i=2;i<=num-1;i++)       
        {
            if(num%i==0)        
                break;
        }
    if(i==num)      
        return 1;       /*1 is boolean truth*/
         /*i=num implies there is no factor of num other than itself*/
    else
        return 0;       /*0 is boolean false*/
}
int main(){
    int N,count=3,pairnum=0;    
                        /*count starts from 3 as 2 cannot form a pair*/
    scanf("%d",&N);
    while(count<=N-2)     /*for count>N-2 other num cannot be found<N*/
        {
            if(check_prime(count)&&check_prime(count+2))
                pairnum++;  
            count+=2;       /*primes are always odd for >2*/
        }
    printf("%d",pairnum);    
    return 0;
}