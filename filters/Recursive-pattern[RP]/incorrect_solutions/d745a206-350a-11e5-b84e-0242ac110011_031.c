/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void pattern1(int x);
void pattern2(int x);
void pattern1 (int x)
{
    printf("%d",x);
    if (x<=0)
    {
        pattern2(x+5);
        return;
    }
    pattern1(x-5);
}
void pattern2(int x)
{
    if(x>n)
    return;
    printf("%d ",x);
    pattern2(x+5);
}
int main(){
    int n;
    scanf("%d",&n);
    pattern1(n);
	return 0;
}