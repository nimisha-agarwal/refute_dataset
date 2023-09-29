/*execute-result:OK*/
/*compile-errors:e160_280491.c:14:18: warning: inequality comparison result unused [-Wunused-comparison]
                x!=0;
                ~^~~
e160_280491.c:14:18: note: use '|=' to turn this inequality comparison into an or-assignment
                x!=0;
                 ^~
                 |=
e160_280491.c:19:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(x=0)
       ~^~
e160_280491.c:19:9: note: place parentheses around the assignment to silence this warning
    if(x=0)
        ^
       (  )
e160_280491.c:19:9: note: use '==' to turn this assignment into an equality comparison
    if(x=0)
        ^
        ==
e160_280491.c:14:17: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
                x!=0;
                ^
e160_280491.c:3:18: note: initialize the variable 'x' to silence this warning
    int n,i,j,k,x;
                 ^
                  = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int n,i,j,k,x;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    for(j=0;j<n;j++){
        for(k=j+1;(j+k)<n;k++){
            if(a[j]!=a[j+k])
             continue;
            else {
                x!=0;
                printf("YES"); 
        }
    }
    }
    if(x=0)
    printf("NO");
	// Fill this area with your code.
	return 0;
}