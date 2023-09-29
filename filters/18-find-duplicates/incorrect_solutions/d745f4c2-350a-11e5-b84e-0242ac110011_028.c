/*execute-result:OK*/
/*compile-errors:e160_280494.c:12:7: warning: inequality comparison result unused [-Wunused-comparison]
     i!=j;
     ~^~~
e160_280494.c:12:7: note: use '|=' to turn this inequality comparison into an or-assignment
     i!=j;
      ^~
      |=
e160_280494.c:14:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if (arr[i]=arr[j])
    ~~~~~~^~~~~~~
e160_280494.c:14:11: note: place parentheses around the assignment to silence this warning
if (arr[i]=arr[j])
          ^
    (            )
e160_280494.c:14:11: note: use '==' to turn this assignment into an equality comparison
if (arr[i]=arr[j])
          ^
          ==
e160_280494.c:4:5: warning: variable 'n' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
int n,i,arr[i],j;
~~~~^
e160_280494.c:5:12: note: uninitialized use occurs here
for (i=0;i<n;i++)
           ^
e160_280494.c:4:6: note: initialize the variable 'n' to silence this warning
int n,i,arr[i],j;
     ^
      = 0
e160_280494.c:4:13: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
int n,i,arr[i],j;
            ^
e160_280494.c:4:8: note: initialize the variable 'i' to silence this warning
int n,i,arr[i],j;
       ^
        = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int n,i,arr[i],j;
for (i=0;i<n;i++)
{

    scanf("%d\n",&n);   
    scanf ("%d",&arr[i]);
 for (j=0;j<n;j++){
     
     i!=j;
 }
if (arr[i]=arr[j])

{
    printf ("YES");
}
else {printf ("NO");}
}
	return 0;
}