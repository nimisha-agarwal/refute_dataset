/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int s;
    int l;
    int f=0;
int j;
int i;
int t;
scanf("%d",&t);
int A[t];
for(l=0;l<t;l=l+1){
    A[t]=s;
    scanf("%d",&s);
}
for (i=0;i<t;i=i+1){
    for(j=0;j<t;j=j+1){
        if(i!=j&&A[i]==A[j]){
            printf("YES");
            f=1;
            break;
        }if(f==1){
            break;
        }
    }
    
}
if(i==t&&j==t){
    printf("NO");
}

	// Fill this area with your code.
	return 0;
}