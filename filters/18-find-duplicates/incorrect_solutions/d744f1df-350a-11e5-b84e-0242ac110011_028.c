/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N,i=0,k=0,count=0;
	scanf("%d\n",&N);
	int array[N];
	while (i<=N)
	{scanf("%d",&array[i]);
	 i=i+1;}
	 
	 i=0;
	 while(i<=N)
     {{while(k<(N-i))
	   {if (array[i]==array[i+k])
	   {count=count+1;}
	   }
	   k=k+1;
	  }
	  i=i+1;}
	  
	  if(count>N)
	  {printf("YES");}
	  return 0;
}