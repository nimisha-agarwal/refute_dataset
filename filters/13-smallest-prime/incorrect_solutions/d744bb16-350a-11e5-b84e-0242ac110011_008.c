/*execute-result:OK*/
/*compile-errors:e158_278275.c:7:17: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    printf("%d",i);
                ^
e158_278275.c:4:14: note: initialize the variable 'i' to silence this warning
    int num,i;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int n);
int main(){
    int num,i;
    scanf("%d",&num);
    check_prime(num);
    printf("%d",i);
    return 0;
}
int check_prime(int num)
{
    int i=num,j,count=0;
    while(i>=num)
    {
        for(j=1;j<=num;j++)
        {
            if(num%j==0)
                count++;
        }
        if(count==2)
            break;
        i++;    
    }
    return i;
    printf("%d",i);
}
