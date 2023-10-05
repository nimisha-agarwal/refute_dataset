/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int N)
    {
        if(N==1)return 0;
        if(N==2)return 1;
        if(N==3)return 1;
        int p;
        int root=sqrt(N)+1;
        for (p=2;p<=root;p++)
        if(N%p==0)return 0;
        
        return 1;
    }
    
int main(){
    
    int n;
    scanf("%d",&n);
    int p;
    for(p=n; p>=n ;p++){
    {
        if(check_prime(p)!=0)
        break;
    }
    
    }
    printf("%d",p);
    
    return 0;
}