/*compile-errors:e160_280479.c:12:10: warning: inequality comparison result unused [-Wunused-comparison]
    if (i!=0,a[i]==a[j])
        ~^~~
e160_280479.c:12:10: note: use '|=' to turn this inequality comparison into an or-assignment
    if (i!=0,a[i]==a[j])
         ^~
         |=
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
    if (i!=0,a[i]==a[j])
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
 if (flag==0)
 printf("NO");

// Fill this area with your code.
	return 0;
}