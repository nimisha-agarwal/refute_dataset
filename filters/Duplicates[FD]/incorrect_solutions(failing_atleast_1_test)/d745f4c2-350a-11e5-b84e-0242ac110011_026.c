/*compile-errors:e160_280494.c:10:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if (arr[i]=arr[j])
    ~~~~~~^~~~~~~
e160_280494.c:10:11: note: place parentheses around the assignment to silence this warning
if (arr[i]=arr[j])
          ^
    (            )
e160_280494.c:10:11: note: use '==' to turn this assignment into an equality comparison
if (arr[i]=arr[j])
          ^
          ==
e160_280494.c:4:13: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
int n,i,arr[i],j;
            ^
e160_280494.c:4:8: note: initialize the variable 'i' to silence this warning
int n,i,arr[i],j;
       ^
        = 0
2 warnings generated.*/
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
if (arr[i]=arr[j])
printf ("YES");

else
break;
{printf ("NO");}
  }
}  
	return 0;
}