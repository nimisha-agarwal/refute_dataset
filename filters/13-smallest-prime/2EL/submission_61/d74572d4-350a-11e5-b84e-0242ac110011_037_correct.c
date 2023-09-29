/*execute-result:OK*/
/*compile-errors:e158_278309.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int n){    //fnctn to check whether a no.(!=1) is prime or not
  if (n!=1) {   
     int i;
     for(i=2;i<n;i++) 
       {
         if (n%i==0)
            return 0;
       }
     return n;
            }
  if(n==1)
    return 2;
}
int main(){
    int i,l,n;
    scanf("%d",&n);       //getting the value of given integer=n
    for(i=n;;i++){        //loop to find the prime no.>=n
        l=check_prime(i);
        if(l!=0) break; 
    }
    printf("%d",l);
    return 0;
}
