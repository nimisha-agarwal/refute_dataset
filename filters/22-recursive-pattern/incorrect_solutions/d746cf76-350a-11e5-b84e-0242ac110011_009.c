/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void print(int num,int spare)
{    
    
    if (num<0) 
    {
        if(num==spare) return;
        printf("%d ", num);
        print(num+5,spare);
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