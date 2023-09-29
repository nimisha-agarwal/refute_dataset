/*execute-result:OK*/
/*compile-errors:e158_278355.c:5:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
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
    scanf("%d%d",&p,&N);
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
    
    
    
        
    
