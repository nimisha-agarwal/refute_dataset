/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int next(int num)
{
    if (num>0)
    return (num-5);
    else return (num+5);
}
void print(int num)
{    
    if (num<0) return;
    else
    {
        printf("%d ", num);
        print(next(num));
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