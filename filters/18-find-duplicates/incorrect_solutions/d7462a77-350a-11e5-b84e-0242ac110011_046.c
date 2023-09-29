/*compile-errors:e160_280502.c:9:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(a[i]=a[i+1])
       ~~~~^~~~~~~
e160_280502.c:9:12: note: place parentheses around the assignment to silence this warning
    if(a[i]=a[i+1])
           ^
       (          )
e160_280502.c:9:12: note: use '==' to turn this assignment into an equality comparison
    if(a[i]=a[i+1])
           ^
           ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,N;
    scanf("%d" ,&N);
	int a[50];
   	for(i=0;N>i;i=i+1){
    scanf("%d",&a[i]);
    if(a[i]=a[i+1])
    break;
    {printf("YES");
    }
 printf("NO");
   }
	return 0;
}