/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
    for(i=1;i<=num-1;i++)
        {
            if(num%i==0)
                break;
        }
    if(i==num)
        return 1;
    else
        return 0;
}
int main(){
    int N,count=2,pairnum=0;
    scanf("%d",&N);
    while(count<=N-2)
        {
            if(check_prime(count)&&check_prime(count+2))
                pairnum++;
        }
    printf("%d",pairnum);    
    return 0;
}