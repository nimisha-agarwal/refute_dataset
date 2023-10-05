/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int j,n,i,sum,z=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {sum=0;
            z=z+j;
        }
        sum=sum+z;
}
    printf("%d",sum);
	return 0;
}