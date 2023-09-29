/*compile-errors:e160_280540.c:24:44: warning: if statement has empty body [-Wempty-body]
                 if(duplicate(arr[i],arr[i+1])==0);
                                                  ^
e160_280540.c:24:44: note: put the semicolon on a separate line to silence this warning
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
        int arr[N];
        int count=0;
        
	    for(int i=0;i<N;i++)
	    {  
	        scanf("%d",&arr[i]);
	    } 
	    for(int i=0;i<N;i++)
	     {
	         if(duplicate(arr[i],arr[i+1])==0);
	        {
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