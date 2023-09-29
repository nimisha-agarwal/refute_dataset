/*compile-errors:e160_280479.c:25:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
 if (flag=0)
     ~~~~^~
e160_280479.c:25:10: note: place parentheses around the assignment to silence this warning
 if (flag=0)
         ^
     (     )
e160_280479.c:25:10: note: use '==' to turn this assignment into an equality comparison
 if (flag=0)
         ^
         ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int n,flag=0;
scanf("%d",&n);
int j,i,a[n]; 
for(i=0;i<n;i++){
    scanf("%d",&a[n]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if (a[i]==a[j])
    {
    printf("YES");
    flag=1;
    break;
    }
     else {
        flag=0;
    }
    }
    if(flag==1)
    break;
}
 if (flag=0)
 printf("NO");

// Fill this area with your code.
	return 0;
}