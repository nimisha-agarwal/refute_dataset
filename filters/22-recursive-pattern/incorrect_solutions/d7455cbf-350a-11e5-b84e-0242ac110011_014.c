/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int make_pattern();

int main()
{
	int n,flag=0;
	scanf("%d",&n);
	make_pattern(n,flag);
	return 0;
}
int make_pattern(int n,int flag)
{
    if(flag>6)
    return 0;
    if(flag<3)
    {
        printf("%d",n);
        n-=5;
        flag++;
        make_pattern(n,flag);
    }
    if(flag>=3&&flag<=6)
    {
        n+=5;
        printf("%d",n);
        flag++;
        make_pattern(n,flag);
    }
    return 0;
}