/*execute-result:OK*/
/*compile-errors:e158_278113.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num)
{
    
    int i=2;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
         break;
        else if(num%i!=0)
        return 1;
         
    }
}
int main(){
    int num,i,count=0;
    scanf("%d",&num);
    for(i=2;i<=(num-2);i++)
    {
        if((check_prime(i)==1) && (check_prime(i+2)==1))
        count=count+1;
        else
        continue;
    }
    printf("%d",count);
    
    return 0;
}