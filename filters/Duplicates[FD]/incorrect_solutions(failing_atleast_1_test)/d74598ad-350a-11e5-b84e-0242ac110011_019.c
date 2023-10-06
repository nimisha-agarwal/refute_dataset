/*execute-result:OK*/
/*compile-errors:*/
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
 if(flag==0)
 printf("NO");
// Fill this area with your code.
	return 0;
}