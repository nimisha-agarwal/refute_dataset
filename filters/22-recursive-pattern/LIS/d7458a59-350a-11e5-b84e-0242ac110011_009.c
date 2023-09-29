/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int print(int n,int target,int difference)
{   
    printf("%d ",n);
    if(n==target && difference<0)
    return 1;
    else if(n<0)
    print(n+difference,target,-difference);
    else 
    print(n-difference,target,difference);
    return 0;
}
int main()
{   int a;
        scanf("%d",&a);
        print(a,a,5);
	return 0;
}