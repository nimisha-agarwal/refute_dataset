/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int j,n,i,sum=0,z=0;
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=i;j++)
        {
            z=z+j;
        }
        sum=sum+z;
}
    printf("%d",sum);
	return 0;
}