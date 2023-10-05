/*compile-errors:e175_305968.c:24:11: warning: unused variable 'c' [-Wunused-variable]
    int n,c;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
//the mountain and the viper
void mountain(int,int);
void viper(int n,int b)// function  prints values upto first
{                      // negative or zero term
    printf("%d ",b);
    if(b<=0)
    {
    mountain(n,b);//calls function function viper
    return;
    }
    b=b-5;
    viper(n,b);
}
void mountain(int n,int b)//prints value from Zeroth or first negative 
{                       // to number equal to n
    if(b==n)
    return;
    b=b+5;
    printf("%d ",b);
    mountain(n,b);
}
int main(){
    int n,c;
    scanf("%d",&n);
    viper(n,n);
	return 0;
}