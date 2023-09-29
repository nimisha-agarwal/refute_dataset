/*execute-result:TL*/
/*compile-errors:e175_306058.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0;
int sub(int num)
{
    count=count+1;
    return (num-5);
}
int add(int num)
{
    count=count+1;
    return (num+5);
}
int next(int num)
{
    if (count<=3)
    return sub(num);
    else if (count<=6)
    return add(num);
}
void print(int num)
{
    printf("%d ", num);
    print(next(num));
}
int main()
{
    int num;
    scanf("%d",&num);
    print(num);
	return 0;
}