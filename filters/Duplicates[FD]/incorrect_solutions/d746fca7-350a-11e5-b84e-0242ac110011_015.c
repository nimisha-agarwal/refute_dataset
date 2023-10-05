/*execute-result:OK*/
/*compile-errors:e160_280540.c:25:23: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
                    if(arr[i]=arr[j]&&i!=j)
                       ~~~~~~^~~~~~~~~~~~~
e160_280540.c:25:23: note: place parentheses around the assignment to silence this warning
                    if(arr[i]=arr[j]&&i!=j)
                             ^
                       (                  )
e160_280540.c:25:23: note: use '==' to turn this assignment into an equality comparison
                    if(arr[i]=arr[j]&&i!=j)
                             ^
                             ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
    int duplicate(int a,int b) {
        if(a==b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int main() {
        int N;
        scanf("%d",&N);
        int arr[50];
        int count=0;
	    for(int i=0;i<N;i++)
	    {  
	        scanf("%d",&arr[i]);
	    } 
	    for(int i=0;i<N;i++)
	     {
	         for(int j=0;j<N;j++)
	        {
	            if(arr[i]=arr[j]&&i!=j)
	            count++;
	            break;
	        }
	     }
	    if(count>0)
	    {
	        printf("YES");
	    }
        else
        {
            printf("NO");
        }
	return 0;
}