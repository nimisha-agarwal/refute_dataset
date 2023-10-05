/*execute-result:OK*/
/*compile-errors:e160_280451.c:23:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
          if(count=1)
             ~~~~~^~
e160_280451.c:23:12: note: place parentheses around the assignment to silence this warning
          if(count=1)
                  ^
             (      )
e160_280451.c:23:12: note: use '==' to turn this assignment into an equality comparison
          if(count=1)
                  ^
                  ==
1 warning generated.*/
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
     {
         while(k<(N-i))
	       {if (array[i]==array[i+k])
	          {count=count+1;}
	        k=k+1;}
	         
            
	    i=i+1;
    }
	  
	  if(count=1)
	  {printf("YES");}
	  else{printf("NO");}
	  return 0;
}