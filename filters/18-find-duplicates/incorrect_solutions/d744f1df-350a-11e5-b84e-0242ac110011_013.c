/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N,i=0,k=0,count;
	scanf("%d\n",&N);
	int array[N];
	while (i<=N)
	{array[i]=getchar();
	 i=i+1;}
	 
	 i=0;
	 while(i<=N)
     {{while(k<=N)
	   {if (array[i]==array[k])
	   {count=count+1;
	      k=k+1;}
	   }
	  }
	  i=i+1;}
	  
	  if(count>N)
	  {printf("YES");}
	  return 0;
}
	 