/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num)
{int x=1,y=3,p;
 p=sqrt(num);
 
     if((num%2==0)&&(num!=2))
     x=0;
 else{
     while(y<=p){
        if(num%y==0){
            x=0;
        }
        y+=2;
     }
     }
 
 return x;     
 }
 

int main(){
    int i,count=0,n;
    scanf("%d",&n);
    for(i=2;i<=n-2;i++){
        if(check_prime(i)&&check_prime(i+2))
        count++;
    }
    
    printf("%d",count);
    
    
    return 0;
}