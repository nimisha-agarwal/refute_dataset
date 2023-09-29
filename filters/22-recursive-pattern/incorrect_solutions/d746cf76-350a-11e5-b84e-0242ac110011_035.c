/*execute-result:TL*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int next(int num)
{
    if (num>0)
    return (num-5);
    else return (num+5);
}
void print(int num,int spare)
{    
    if (num>=spare) return;
    else
    {
        printf("%d ", num);
        print(next(num),spare);
    }    
}
int main()
{
    int num,spare;
    scanf("%d",&num);
    spare=num;
    print(num,spare+1);

	return 0;
}