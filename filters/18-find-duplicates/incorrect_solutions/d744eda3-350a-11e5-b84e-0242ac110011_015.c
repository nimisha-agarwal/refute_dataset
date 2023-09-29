/*compile-errors:e160_280450.c:5:13: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    int N,a[N];
            ^
e160_280450.c:5:10: note: initialize the variable 'N' to silence this warning
    int N,a[N];
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
    int N,a[N];
    //printf("enter size of array less than 50");
    scanf("%d\n",&N);
    for(int i=0;i<=N;i++)
    {
        scanf("%d ",&a[i]);
    }
    
	return 0;
}