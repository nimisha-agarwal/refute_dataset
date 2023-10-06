/*execute-result:OK*/
/*compile-errors:e175_306058.c:25:13: warning: unused variable 'spare' [-Wunused-variable]
    int num,spare;
            ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0;
void print(int num,int n)
{    
    if (count<=n)
    {
        printf ("%d ", num);
        count++;
        print (num-5,n);
    }
    
}
void print1(int num,int n)
{    
    if (count<=2*n)
    {
        printf ("%d ", num);
        count++;
        print1 (num+5,n);
    }
    
}
int main()
{
    int num,spare;
    scanf("%d",&num);
    int n=num/5+1;
    if (n%5) n++;
    print(num,n);
    num=num-n*5+5;
    print1(num,n);
    //printf("%d", count);
	return 0;
}