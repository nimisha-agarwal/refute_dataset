/*compile-errors:e158_278298.c:22:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N_1);
           ~~  ^~~
e158_278298.c:22:16: warning: variable 'N_1' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N_1);
               ^~~
e158_278298.c:21:12: note: initialize the variable 'N_1' to silence this warning
    int N_1;
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num) //Defined a Function called 'check_prime'
{
    int N,x; //Defined 2 Variable,One For Number Other for Division
    N=num;   //Stored Value of Input in N
    x=2;     //Initialised The Value Of X as 2
          for (x=2;x<N;) //Created a Division Process Loop
            {
              if ((N%x)!=0) //If Number is Not Divisble By X, then
               {x=x+1;}     //Incremented The Value Of X
              else          //Otherwise
               {N=N+1;}     //Incremented The Value of N
            }
 return x;  //The Output is Returned in x
    
}                     

int main(){  //Main Body
    
    int N_1;
    scanf("%d",N_1);
    printf("%d",check_prime(N_1)); //Used The Function for Input 22
    
    return 0;                    
}