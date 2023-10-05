/*compile-errors:e158_278282.c:20:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278282.c:5:11: warning: variable 'j' is used uninitialized whenever function 'check_prime' is called [-Wsometimes-uninitialized]
    int i,j;
    ~~~~~~^
e158_278282.c:6:15: note: uninitialized use occurs here
    for(i=num;j!=i;i++)
              ^
e158_278282.c:5:12: note: initialize the variable 'j' to silence this warning
    int i,j;
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    for(i=num;j!=i;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
            else
            {
                return i;
            }
        }
    }
}



int main(){
    
    int N,p;
    scanf("%d",&N);
    p=check_prime(N);
    printf("%d",p);
    
    return 0;
}