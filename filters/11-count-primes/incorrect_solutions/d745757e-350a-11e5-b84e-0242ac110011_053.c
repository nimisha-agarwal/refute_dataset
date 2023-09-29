/*compile-errors:e158_278042.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,p=0,j,m=0;
    for(i=2;i<=num;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%2!=0)
                p=p+1;
            }
            if(p==(num-2))
            m=m+1;
            return i;
        }
}


int main(){
    int a;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}