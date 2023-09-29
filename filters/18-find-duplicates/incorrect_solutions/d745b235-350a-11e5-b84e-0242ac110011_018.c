/*compile-errors:e160_280486.c:13:24: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
            scanf("%d",a[j]);
                   ~~  ^~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    int i,j;
    //scanf("%d%d",&i,&j);

    for (i=0;i<N;i=i+1){
        scanf("%d",&a[i]);
        for (j=0;j<N;j=j+1){
            scanf("%d",a[j]);
            if (i!=j&&a[i]==a[j])
           { printf("YES");
            }else{
            printf("NO");
        }
        }
    }
	// Fill this area with your code.
	return 0;
}