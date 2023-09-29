/*compile-errors:e158_278355.c:5:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e158_278355.c:8:9: warning: variable 'p' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
    int p,N;
    ~~~~^
e158_278355.c:9:24: note: uninitialized use occurs here
    while (primecheck (p))
                       ^
e158_278355.c:8:10: note: initialize the variable 'p' to silence this warning
    int p,N;
         ^
          = 0
e158_278355.c:13:12: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    if (p>=N)
           ^
e158_278355.c:8:12: note: initialize the variable 'N' to silence this warning
    int p,N;
           ^
            = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int primecheck (int Num){
    int i;
for(i=0; i<Num;i++);
}
int main()
{
    int p,N;
    while (primecheck (p))
    {
        p=p+1;
    }
    if (p>=N)
    {
printf("%d",p);
}
return 0;
}
    
    
    
        
    
