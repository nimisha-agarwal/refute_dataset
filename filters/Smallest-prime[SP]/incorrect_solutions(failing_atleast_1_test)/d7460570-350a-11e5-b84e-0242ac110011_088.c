/*compile-errors:e158_278328.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278328.c:13:20: warning: variable 'm' is uninitialized when used here [-Wuninitialized]
            return m;
                   ^
e158_278328.c:6:12: note: initialize the variable 'm' to silence this warning
    int i,m;
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int a;
    int i,m;
    for(i=num;i>=num;i=i+1)
    {
        for(a=2;a<i;a=a+1){
            if((i%a)==0)
            break;
            else
            return m;
        }
    }
}

int main(){
    int n,k;
    scanf("%d",&n);
    k=check_prime(n);
    printf("%d",k);
    
    return 0;
}