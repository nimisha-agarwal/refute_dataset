/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){sum=0;
        for(int j=1;j<=(i+1);j++){
            sum=sum+j;
            
        }
        sum=sum+i;
    }
    printf("%d",sum);
	return 0;
}