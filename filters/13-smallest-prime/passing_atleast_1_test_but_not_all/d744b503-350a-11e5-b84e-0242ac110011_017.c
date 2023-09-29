/*execute-result:OK*/
/*compile-errors:e158_278273.c:12:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
1 warning generated.*/
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
        for (p=2;p<=root;p=p+1)
        if(N%1==0)return 0;
    }
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=n;i>=n;i++)
    {
        if(check_prime(i)!=0)
        break;
    }
    printf("%d",i);
    return 0;
}