/*compile-errors:e158_278101.c:5:11: warning: unused variable 'a' [-Wunused-variable]
    int x,a;
          ^
e158_278101.c:30:23: warning: if statement has empty body [-Wempty-body]
        if(c==1&&v==1);
                      ^
e158_278101.c:30:23: note: put the semicolon on a separate line to silence this warning
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int i)
{
    int x,a;
    //int count=1;
    for(x=2;x<=(i-1);x++)
    {
       if(i%x==0)
       {
        return 0;   
       }
    
        
        
        
    }
    return 1;
    //Complete function definition
}
int main()
{
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
    }
    printf("%d",count);
    //Write your code here
    return 0;
}