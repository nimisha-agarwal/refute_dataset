/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int);
int main() {
    int a,i;//declaration of variables.
    int b=2;//initilation of variable b for loop.
    scanf("%d",&a);//scan the input.
    while (b<=a)
    {
        i=2;//initilation of variable i for loop.
        for(i=2;i<=(b-1);i++)
        {
            int count=0;
            count=count+((b%i)==0);
            i=i+1;
            printf("%d",count);
            
        }
    }
    return 0;
}