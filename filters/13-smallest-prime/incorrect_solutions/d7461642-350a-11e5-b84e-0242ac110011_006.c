/*compile-errors:e158_278336.c:3:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num)
                    ^
e158_278336.c:10:2: warning: control may reach end of non-void function [-Wreturn-type]
}}
 ^
e158_278336.c:5:11: warning: variable 'p' is used uninitialized whenever function 'check_prime' is called [-Wsometimes-uninitialized]
    int i,p;
    ~~~~~~^
e158_278336.c:6:16: note: uninitialized use occurs here
    for (i=2;i<p;i=i+1)
               ^
e158_278336.c:5:12: note: initialize the variable 'p' to silence this warning
    int i,p;
           ^
            = 0
e158_278336.c:18:13: warning: variable 'num' is uninitialized when used here [-Wuninitialized]
for (p=1;p<=num;p=p+1){
            ^~~
e158_278336.c:15:14: note: initialize the variable 'num' to silence this warning
    int p,num;
             ^
              = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,p;
    for (i=2;i<p;i=i+1)
{    if (p%i!=0)
 return(p);
 p=p+1;
}}

//Complete function definitions

int main(){
    int p,num;
    
scanf("%d",&p);
for (p=1;p<=num;p=p+1){
printf("%d",check_prime(p));}

    
    //Write your code here
    
    return 0;
}