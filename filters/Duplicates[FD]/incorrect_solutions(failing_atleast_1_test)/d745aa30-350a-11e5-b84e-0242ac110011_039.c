/*execute-result:RT*/
/*compile-errors:e160_280483.c:11:11: warning: expression result unused [-Wunused-value]
        for(;0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
             ~~~~^ ~~~~
e160_280483.c:11:22: warning: expression result unused [-Wunused-value]
        for(;0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
                        ~~~~^ ~~~~
e160_280483.c:11:10: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
        for(;0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
                ^
e160_280483.c:4:12: note: initialize the variable 'i' to silence this warning
    int N,i,j;
           ^
            = 0
e160_280483.c:11:21: warning: variable 'j' is uninitialized when used here [-Wuninitialized]
        for(;0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
                           ^
e160_280483.c:4:14: note: initialize the variable 'j' to silence this warning
    int N,i,j;
             ^
              = 0
e160_280483.c:5:10: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        int num[N];
                ^
e160_280483.c:4:10: note: initialize the variable 'N' to silence this warning
    int N,i,j;
         ^
          = 0
5 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,j;
	int num[N];
	scanf("%d",&N);
	for (N=0;N<50;N++)
	{
	   scanf("%d",&num[N]); 
	}
	for(;0<=i&&i<50,0<=j&&j<50,i!=j;i++,j++)
	{
	    if (num[i]==num[j])
	    {
	        printf("YES");
	    }
	    else
	    {
	        printf("NO");
	    }
	}
	return 0;
}