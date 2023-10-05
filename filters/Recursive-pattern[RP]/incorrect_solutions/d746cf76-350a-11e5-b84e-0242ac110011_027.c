/*execute-result:OK*/
/*compile-errors:e175_306058.c:20:13: warning: unused variable 'spare' [-Wunused-variable]
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
    else if (count<=2*n)
    {
        printf ("%d ", num);
        count++;
        print (num+5,n);
    }
}
int main()
{
    int num,spare;
    scanf("%d",&num);
    int n=num/5+1;
    print(num,n);
    num=num-n*5+10;
    
	return 0;
}