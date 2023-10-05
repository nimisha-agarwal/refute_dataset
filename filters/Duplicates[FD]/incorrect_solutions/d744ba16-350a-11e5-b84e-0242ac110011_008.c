/*compile-errors:e160_280442.c:13:49: warning: if statement has empty body [-Wempty-body]
               if (x==((a[i]==a[k]) && (i!=k)) ? 1 : 0);
                                                       ^
e160_280442.c:13:49: note: put the semicolon on a separate line to silence this warning
e160_280442.c:13:13: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
               if (x==((a[i]==a[k]) && (i!=k)) ? 1 : 0);
                   ^
e160_280442.c:5:13: note: initialize the variable 'x' to silence this warning
        int N,i,k,x;
                   ^
                    = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[49];
	int N,i,k,x;
	scanf("%d\n",&N);
	for (i=0;i<N;i++)
	{scanf("%d ",&a[i]);
	}
	   for(i=0;i<N;i++)
	   {
	       for(k=0;k<N;k++)
	       if (x==((a[i]==a[k]) && (i!=k)) ? 1 : 0);
	   }     
	   if (x==1)
	   printf("YES");
	   else 
	   printf("NO");
	       
	return 0;
}