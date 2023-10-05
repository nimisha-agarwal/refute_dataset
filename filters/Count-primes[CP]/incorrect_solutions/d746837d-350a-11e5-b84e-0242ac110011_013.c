/*execute-result:OK*/
/*compile-errors:e158_278097.c:3:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num)
                    ^
e158_278097.c:6:15: warning: variable 'l' is uninitialized when used here [-Wuninitialized]
    for(i=2;i<l;i++)
              ^
e158_278097.c:5:10: note: initialize the variable 'l' to silence this warning
    int l,i;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int l,i;
    for(i=2;i<l;i++)
    {
        if((l%i)==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    
    int num,z;
    scanf("%d",&num);
    z= check_prime(num);
    printf("%d",z);
    

    
    
    return 0;
}