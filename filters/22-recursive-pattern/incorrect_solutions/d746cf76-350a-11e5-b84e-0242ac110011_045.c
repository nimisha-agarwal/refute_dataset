/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int next1(int num)
{
    return (num-5);
}
int print(int num)
{    
    if (num<0) 
    {
        printf("%d ", num);
        return num;
    }
    else
    {
        printf("%d ", num);
        print(next1(num));
    }    
}
int main()
{
    int num,spare;
    scanf("%d",&num);
    
    spare=num;
    print(num);

	return 0;
}