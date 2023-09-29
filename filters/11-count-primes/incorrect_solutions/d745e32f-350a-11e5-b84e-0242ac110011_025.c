/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{
int i,a;
for(i=1;i<=(num/2);i=i+1){
    if(num%i==0){
        a=1;
        break;
        } else  {
            a=0;
        }
}        
if(a==1){
    return 0;
    }else {
        return 1;
}   
}
         
 int main()
 {
  int N,p,total=0;
 scanf("%d",&N);
  
 for(p=3;p<=N-2;p=p+2){
     if(check_prime(p)==1 && check_prime(p+2)==1){
         total=total +1;
     } 
     
     }
 printf("%d", total);
    
    return 0;
}