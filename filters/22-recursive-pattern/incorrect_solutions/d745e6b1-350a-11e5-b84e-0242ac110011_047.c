/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void print_pattern(int n,int i)
{
    int a[1000];
    if(n>0)
    {
        a[i]=n;
        print_pattern(n-5,i+1);
    }
    /*else if(n<=0)
    {
        a[i]=n;
        print_pattern(n+5,i+1);
    }*/
    int j;
    for(j=0;j<i;j++)
    {
        printf("%d",a[j]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print_pattern(n,0);
	return 0;
}