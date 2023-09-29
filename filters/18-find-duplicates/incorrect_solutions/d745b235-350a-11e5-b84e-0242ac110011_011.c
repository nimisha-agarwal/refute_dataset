/*compile-errors:e160_280486.c:7:2: warning: expression result unused [-Wunused-value]
N<50;
~^~~
e160_280486.c:5:7: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
int a[N];
      ^
e160_280486.c:4:6: note: initialize the variable 'N' to silence this warning
int N;
     ^
      = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int N;
int a[N];
int i,j;
N<50;
scanf("%d%d",&i,&j);
for (i=0;i<N;i=i+1){
    for (j=0;j<N;j=j+1){
        if (i!=j&&a[i]==a[j])
        printf("YES");
        else
        printf("NO");
    }
}
	// Fill this area with your code.
	return 0;
}