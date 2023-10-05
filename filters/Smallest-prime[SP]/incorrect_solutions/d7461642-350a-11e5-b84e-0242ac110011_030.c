/*compile-errors:e158_278336.c:4:24: warning: unused parameter 'N' [-Wunused-parameter]
int smallest_prime(int N)
                       ^
e158_278336.c:9:2: warning: control reaches end of non-void function [-Wreturn-type]
}}
 ^
e158_278336.c:5:6: warning: variable 'p' is used uninitialized whenever function 'smallest_prime' is called [-Wsometimes-uninitialized]
{int p,i;
 ~~~~^
e158_278336.c:6:17: note: uninitialized use occurs here
    for (i=2;i<=p;i=i+1)
                ^
e158_278336.c:5:7: note: initialize the variable 'p' to silence this warning
{int p,i;
      ^
       = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int smallest_prime(int N)
{int p,i;
    for (i=2;i<=p;i=i+1)
{    if (p%i!=0){printf("p");
    p=p+1;}
}}

//Complete function definitions

int main(){int p,q;
scanf("%d",&p);
q=smallest_prime(p);
printf("%d",q);

    
    //Write your code here
    
    return 0;
}