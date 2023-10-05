/*execute-result:OK*/
/*compile-errors:e158_278034.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)//Complete function definitions
{
    
    int i;
    for(i=1;i<=num-1;i++){
    if(num%i==0){
        return 0;
    }    
     else{
         return 1;
     }   
    }
    
    
}

int main(){
    int i,n,count=0;
    scanf("%d",&n);
    check_prime(n);
    for(i=0;i<n-1;i++){
        if(check_prime(i)&&check_prime(i+2))
        {
            count++;
        }
        }
        printf("%d",count);
    
    return 0;

}//Write your code here
    
    