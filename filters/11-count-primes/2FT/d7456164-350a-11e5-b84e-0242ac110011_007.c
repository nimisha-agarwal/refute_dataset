/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
 {
    int j,z=0;
for(j=2;j<num;j++){
    if(num%j==0){
        z=z+1;
        break;
    }
} if(z==0)
{return 1;}
else {return 0;}
 }  

//Complete function definitions

int main(){
 int i,a,b,c,d,count=0;
 scanf("%d",&a);
 for(i=3;i<=a;i++){
 b=i+2;
 c=check_prime(b);
 d=check_prime(i);
 if(c==1 && d==1){
    count=count+1; 
 }
 
 }printf("%d",count);
    //Write your code here
    
    return 0;
}