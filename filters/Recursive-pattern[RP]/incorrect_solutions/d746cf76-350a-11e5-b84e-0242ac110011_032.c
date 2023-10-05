/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0;

int next(int num)
{
    count++;
    if (count<=3)
    return (num-5);
    else if (count<=6)
    return (num+5);
}
void print(int num)
{
    printf("%d ", num);
    print(next(num));
    if (count==6) return;
}
int main()
{
    int num;
    scanf("%d",&num);
    print(num);
	return 0;
}