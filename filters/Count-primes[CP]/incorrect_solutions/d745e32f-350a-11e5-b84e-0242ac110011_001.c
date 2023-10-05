/*compile-errors:e158_278065.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}           
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{int i;
for(i=1;i<=(num/2);i=i+1){
    if(num%i==0){
        return 0;
        } else  {
            return 1;
        }
}        
}           
         
 

int main(){
 int N,p;
 scanf("%d",&N);
 int total=0; 
 for(p=1;p<=N-2;p=p+2){
     if(check_prime (p)==1 && check_prime (p+2)==1){
         total=total +1;
     } 
     printf("%d", total);
     }
 
    
    return 0;
}