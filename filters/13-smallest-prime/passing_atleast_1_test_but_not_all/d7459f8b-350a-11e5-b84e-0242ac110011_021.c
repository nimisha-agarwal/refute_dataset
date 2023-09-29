/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int num){
    int a;
    
    for(;;)
    {
        for(a=2;a<=num;a++)
        {
            if((num%a)==0)
            {
                num=num+1;
            }
            else
            {
                return num;
            }
        }
    }
}

int main(){
    
    int num,p;
    scanf("%d",&num);
    p=check_prime(num);
    printf("%d",p);
    
    return 0;
}