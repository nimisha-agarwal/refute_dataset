/*execute-result:OK*/
/*compile-errors:e175_306058.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
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
    if (count>6) return;

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