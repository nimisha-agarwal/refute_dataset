/*compile-errors:e158_277980.c:3:18: warning: unused variable 'tn' [-Wunused-variable]
int main(){int n,tn;
                 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){int n,tn;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<(i+1);j++){
            sum=sum+j;
            
        }
        sum=sum+i;
    }
	return 0;
}