/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void print(int num,int spare)
{    
    int temp;
    if(num>spare) return;
    if ((num<0)||(temp==1)) 
    {
        temp=1;
        printf("%d ", num);
        print (num+5,spare);
    }
    else
    {
        printf("%d ", num);
        print(num-5,spare);
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