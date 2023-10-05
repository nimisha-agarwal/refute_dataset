/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i,d=0;
    if(num==2) {return 1;}//2 is the smallest prime no
    else{
         for (i=2;i<num;i++){//prime check for nos != 2
                      if(num%i==0){d=0;break;}
                      else{d=1;}}}
             return d;}//creating a function to check whether a no is                           prime


int main(){
    int n,i,s;//defining integer boxes
    scanf("%d",&n);
    s=0;
    for(i=2;i<n-1;i++){//running a loop to increase another variable s                        every time it finds a twin prime pair
        if(check_prime(i)==1 && check_prime(i+2)==1)//twin prime check
        {s=s+1;}//s updation
    }
    printf("%d",s);//printing the no of pairs i.e. the ans.
    
    
    

    
    return 0;
}