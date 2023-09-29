/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i,d=0;
    if(num==2) {return 1;}
    else{
         for (i=2;i<num;i++){
                      if(num%i==0){break;}
                      else{d=1;}}}
             return d;}


int main(){
    int n,i,s;
    scanf("%d",&n);
    s=0;
    for(i=2;i<n-1;i++){
        
        if(check_prime(i)==1 && check_prime(i+2)==1)
        {s=s+1;}
    }
    printf("%d",s);
    
    
    

    
    return 0;
}