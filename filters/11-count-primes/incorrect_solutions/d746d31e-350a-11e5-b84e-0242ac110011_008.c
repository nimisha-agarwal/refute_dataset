/*execute-result:OK*/
/*compile-errors:e158_278105.c:26:6: warning: equality comparison result unused [-Wunused-comparison]
for(i==2;i<=N-2;i=i+2)
    ~^~~
e158_278105.c:26:6: note: use '=' to turn this equality comparison into an assignment
for(i==2;i<=N-2;i=i+2)
     ^~
     =
e158_278105.c:26:5: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
for(i==2;i<=N-2;i=i+2)
    ^
e158_278105.c:21:6: note: initialize the variable 'i' to silence this warning
int i;
     ^
      = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<=num-1;i=i+1)
    {
        if(num%i==0)
            return 0;
        
        
    } 
    return 1;
}
        


int main(){
    
int N;
int i;
int count = 0;

scanf("%d",&N);

for(i==2;i<=N-2;i=i+2)

{ if((check_prime(i)==1)&&(check_prime(i+2)==1))

{
    count++;
    
}
    
}

    
    return 0;
}