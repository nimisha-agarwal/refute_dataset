/*compile-errors:e158_278069.c:5:7: warning: unused variable 'y' [-Wunused-variable]
int x,y;
      ^
e158_278069.c:20:17: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf ("%d",N);
            ~~  ^
e158_278069.c:17:21: warning: unused variable 'num' [-Wunused-variable]
    int i,a,b,count,num;
                    ^
e158_278069.c:24:17: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
    if (a==i && b==(i+2)){
                ^
e158_278069.c:17:14: note: initialize the variable 'b' to silence this warning
    int i,a,b,count,num;
             ^
              = 0
e158_278069.c:24:9: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
    if (a==i && b==(i+2)){
        ^
e158_278069.c:17:12: note: initialize the variable 'a' to silence this warning
    int i,a,b,count,num;
           ^
            = 0
e158_278069.c:20:17: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf ("%d",N);
                ^
e158_278069.c:16:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
int x,y;
for (x=2;x<num;x++)
{
    if ((num%x)==0)
   {
    return 0;
   }    
}
return num;
}
int main(){
    int N;
    int i,a,b,count,num;
    
    count=0;
    scanf ("%d",N);
    for (i=2;i<=N-2;i++){
    check_prime(i);
    check_prime(i+2);
    if (a==i && b==(i+2)){
        count++;}
      } 
      printf ("%d",count);


    
    //Write your code here
    
    return 0;
}