/*execute-result:OK*/
/*compile-errors:e175_306058.c:13:23: warning: data argument not used by format string [-Wformat-extra-args]
        printf ("d ", num);
                ~~~~  ^
e175_306058.c:20:13: warning: unused variable 'spare' [-Wunused-variable]
    int num,spare;
            ^
2 warnings generated.*/
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
        printf ("d ", num);
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
    num=num-n*5;
    
	return 0;
}