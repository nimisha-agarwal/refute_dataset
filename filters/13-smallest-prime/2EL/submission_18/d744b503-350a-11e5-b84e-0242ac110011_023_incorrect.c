/*execute-result:TL*/
/*compile-errors:e158_278273.c:10:29: warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
        for (i=2;i<=root;i=i++)
                          ~ ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num)
    {
        if(num==1)return 0;
        if(num==2)return 1;
        if(num==3)return 1;
        int i;
        int root=sqrt(num)+1;
        for (i=2;i<=root;i=i++)
        if(num%i==0)return 0;
        return 1;
    }
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=n;i>=n;i++){
    {
        if(check_prime(i)!=0)
        break;
    }
    }
    printf("%d",i);
    return 0;
}