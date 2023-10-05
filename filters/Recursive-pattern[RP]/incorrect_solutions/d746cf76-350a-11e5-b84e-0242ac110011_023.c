/*compile-errors:e175_306058.c:10:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if (num=spare) return;
        ~~~^~~~~~
e175_306058.c:10:12: note: place parentheses around the assignment to silence this warning
    if (num=spare) return;
           ^
        (        )
e175_306058.c:10:12: note: use '==' to turn this assignment into an equality comparison
    if (num=spare) return;
           ^
           ==
1 warning generated.*/
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
    if (num=spare) return;
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
    print(num,spare);

	return 0;
}