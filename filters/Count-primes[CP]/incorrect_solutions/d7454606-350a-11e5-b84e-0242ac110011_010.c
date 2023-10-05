/*compile-errors:e158_278033.c:20:11: warning: unused variable 'b' [-Wunused-variable]
    int n,b,j,c;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
int i;
for (i=2;i<=num/2;i++)
{
    if (num%i==0)
    { 
        return 0;
    }
    
} 
    return 1;
}


//Complete function definitions

int main(){
    int n,b,j,c;
    int x=0;
    scanf ("%d",&n);
    for (j=3;j<n-1;j++){
        c=check_prime(j);
        if (c==1){
            c=check_prime(j=2);
            if (c==1){
                x=x+1;
            }
        }
    }
    printf ("%d",x);
  
    //Write your code here
    
    return 0;
}