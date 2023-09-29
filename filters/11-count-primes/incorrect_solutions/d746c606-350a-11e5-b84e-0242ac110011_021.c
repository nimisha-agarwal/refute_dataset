/*compile-errors:e158_278101.c:6:9: warning: unused variable 'count' [-Wunused-variable]
    int count=1;
        ^
e158_278101.c:29:19: warning: if statement has empty body [-Wempty-body]
    if(c==1&&v==1);
                  ^
e158_278101.c:29:19: note: put the semicolon on a separate line to silence this warning
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int i)
{
    int x;
    int count=1;
    for(x=2;x<=(i-1);i=i+1)
    {
       if(i%x==0)
       {
        return 0;   
       }
    
        
        
        
    }
    return 1;
    //Complete function definition
}
int main(){
int count=0;
int N,i,c,v;
scanf("%d",&N);
for(i=2;i<=(N-2);i++)
{
    c=check_prime(i);
    v=check_prime(i+2);
    if(c==1&&v==1);
    {
        count++;
    }
    printf("%d",count);
}
//Write your code here
    
    return 0;
}