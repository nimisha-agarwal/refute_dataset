/*execute-result:OK*/
/*compile-errors:e158_278042.c:17:13: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
        if(p=num-2)
           ~^~~~~~
e158_278042.c:17:13: note: place parentheses around the assignment to silence this warning
        if(p=num-2)
            ^
           (      )
e158_278042.c:17:13: note: use '==' to turn this assignment into an equality comparison
        if(p=num-2)
            ^
            ==
e158_278042.c:19:18: warning: more '%' conversions than data arguments [-Wformat]
        printf("%dIt is a prime");
                ~^
e158_278042.c:5:15: warning: unused variable 'j' [-Wunused-variable]
    int i,p=0,j;
              ^
e158_278042.c:25:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
4 warnings generated.*/
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
            continue;
        }
        else
        {
            break;
        }
        if(p=num-2)
        {
        printf("%dIt is a prime");
        }
        
    }
        
            
}


int main(){
    int a;
    scanf("%d",&a);
    check_prime(a);
    return 0;
}