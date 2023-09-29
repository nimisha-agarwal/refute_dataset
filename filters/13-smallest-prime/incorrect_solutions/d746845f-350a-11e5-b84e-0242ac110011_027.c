/*compile-errors:e158_278355.c:4:8: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    if(i==2)
       ^
e158_278355.c:3:10: note: initialize the variable 'i' to silence this warning
    int i;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int primecheck(int Num){
    int i;
    if(i==2)
    {
    printf("2");
    }
for(i=2;i<Num;i++)//if number is not divisible by any number other than number than number is prime
{
if (Num %i==0)
return 1;
}
return 0;
}
int main()
{
    int N;
    scanf("%d",&N);
    while(primecheck(N))
    {
        N=N+1;
    }

printf("%d",N);
return 0;
}