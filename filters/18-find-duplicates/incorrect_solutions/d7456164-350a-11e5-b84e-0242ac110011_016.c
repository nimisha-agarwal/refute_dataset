/*compile-errors:e160_280462.c:6:12: warning: variable 'y' is uninitialized when used here [-Wuninitialized]
    {for(j=y;j>0;j=j-2)
           ^
e160_280462.c:3:20: note: initialize the variable 'y' to silence this warning
{   int sum=0,i,j,y,a[x];
                   ^
                    = 0
e160_280462.c:15:15: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d\n",sze);
               ~~    ^~~
e160_280462.c:15:15: warning: variable 'sze' is uninitialized when used here [-Wuninitialized]
        scanf("%d\n",sze);
                     ^~~
e160_280462.c:14:9: note: initialize the variable 'sze' to silence this warning
        int sze,t;
               ^
                = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int repeat_check(int x)
{   int sum=0,i,j,y,a[x];
scanf("%d",&a[2*x-1]);
    for(i=x;i>0;i=i-2)
    {for(j=y;j>0;j=j-2)

    {if(a[i]==a[j])
    sum=sum+1;}
    }if(sum==0)
    return 1;
    else return 0;}
int main() {
	int sze,t;
	scanf("%d\n",sze);
	t=repeat_check(sze);
	if(t==0)
	printf("yes");
	else
	printf("no");
	return 0;
}