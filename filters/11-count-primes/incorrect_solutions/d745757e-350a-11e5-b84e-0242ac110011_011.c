/*execute-result:OK*/
/*compile-errors:e158_278042.c:16:18: warning: more '%' conversions than data arguments [-Wformat]
        printf("%dIt is a prime");
                ~^
e158_278042.c:5:15: warning: unused variable 'j' [-Wunused-variable]
    int i,p=0,j;
              ^
e158_278042.c:21:1: warning: control reaches end of non-void function [-Wreturn-type]
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
        if(num%i!=0)
        {
            p=p+1;
        }
        else
        {
            break;
        }
        printf("%dIt is a prime");
        
    }
        
            
}


int main(){
    int a;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}