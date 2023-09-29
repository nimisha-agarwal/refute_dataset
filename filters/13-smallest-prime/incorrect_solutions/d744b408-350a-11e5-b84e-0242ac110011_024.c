/*compile-errors:e158_278272.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int cnt=0;
    for(int i=1;i<=num/2;i++)
      {
            if(num%i==0)
            cnt++;
            if (cnt==1)
            return num;
}

}
int main()
{
    int n;
    scanf("%d",&n);
    int r=check_prime(n);
    printf("%d",r);
    return 0;
}