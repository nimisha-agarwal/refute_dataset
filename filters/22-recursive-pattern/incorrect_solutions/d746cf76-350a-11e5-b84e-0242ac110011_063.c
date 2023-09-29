/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
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
        num=num+10;
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
    num=num-n*5;
    
	return 0;
}