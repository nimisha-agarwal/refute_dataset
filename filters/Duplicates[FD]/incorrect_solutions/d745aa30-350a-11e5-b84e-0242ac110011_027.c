/*execute-result:OK*/
/*compile-errors:e160_280483.c:9:8: warning: expression result unused [-Wunused-value]
        for(;N<50,0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
             ~^~~
e160_280483.c:9:16: warning: expression result unused [-Wunused-value]
        for(;N<50,0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
                  ~~~~^ ~~~~
e160_280483.c:9:27: warning: expression result unused [-Wunused-value]
        for(;N<50,0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
                             ~~~~^ ~~~~
e160_280483.c:9:26: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
        for(;N<50,0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
                                ^
e160_280483.c:4:14: note: initialize the variable 'j' to silence this warning
    int N,i,j;
             ^
              = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,j;
     N=0,i=0;
	int num[N];
	scanf("%d",&N);
	scanf("%d",&num[N]);
	for(;N<50,0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
	{
	    if (num[i]==num[j])
	    {
	        printf("YES/n");
	    }
	    else
	    {
	        printf("NO/n");
	    }
	}
	return 0;
}