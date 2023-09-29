/*execute-result:OK*/
/*compile-errors:e158_278042.c:5:11: warning: unused variable 'p' [-Wunused-variable]
    int i,p=0,j;
          ^
e158_278042.c:5:15: warning: unused variable 'j' [-Wunused-variable]
    int i,p=0,j;
              ^
e158_278042.c:15:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,p=0,j;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    printf("it is a prime");    
            
}


int main(){
    int a;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}