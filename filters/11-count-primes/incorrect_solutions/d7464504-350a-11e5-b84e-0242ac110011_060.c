/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,x=0;
    for(i=2; i<num; i++){
        if(num%i==0){
            break;      //if num is not prime just return 0
        }else{
            x=i+1;
        }
    }
    return x;
}

int main()
{
    int N;
    int i=4;
    int count=0;
    
    scanf("%d", &N);
    
    for(i=4;i<=N;i++)
    { 
        if(2==(check_prime(i)-check_prime(i-2)))
        {
            count++;
        }
            
    }
    printf("%d",count);
    return 0;
}