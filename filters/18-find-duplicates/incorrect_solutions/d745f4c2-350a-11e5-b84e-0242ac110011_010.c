/*compile-errors:e160_280494.c:4:13: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
int n,i,arr[i],j;
            ^
e160_280494.c:4:8: note: initialize the variable 'i' to silence this warning
int n,i,arr[i],j;
       ^
        = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int n,i,arr[i],j;
scanf ("%d\n",&n);
for (i=0;i<n;i++)
{
    scanf ("%d",&arr[i]);
 for (j=0;j<n;j++){
        scanf ("%d",&arr[j]) ;

if ((arr[i]==arr[j]) && (i!=j)){
    printf ("YES");
    return 0;
    }
  }
} 
 printf ("NO");
 return 0;
}