/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>

int check_prime(int num);

//Complete function definitions

int main(){
    int n;//number to be taken as input
    int i;//counter and output
    int j;//flagger
    scanf("%d",&n);
    i = n;
    while(1)
    {
        j = check_prime(i);
        if (j == 1)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}

int check_prime(num)
{
    float numr;//for storing square root of a number and related value
    int flag;//for flagging if we get a composite number or not
    numr = pow(num,0.5);
    numr += 1;
    flag = 0;
    if (num!=2&&num!=1)
    {
        for (int i = 2;i<=numr;i++)
        {
            if (num%i == 0)
            {
                flag = 1;
                return 0;//0 means composite
            }
        }
    }
    return 1;//1 means prime
}