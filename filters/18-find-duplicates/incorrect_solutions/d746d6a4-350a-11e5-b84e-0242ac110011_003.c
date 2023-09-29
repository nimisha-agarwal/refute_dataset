/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int read_array(int a[],int n)
    {
        int i=0;
        for(;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
        return 0;    
    }
int duplicate(int a[],int n)
    {   int i,j;
        for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                   {
                       if(a[i]==a[j])
                        return 1;
                   }   
           }
        return 0;    
    }
int main() {
    int arr[50],N;
    scanf("%d",&N);
	read_array(arr,N);
	if(duplicate(arr,N))
	    printf("yes\n");
	else
	    printf("no\n");
	return 0;
}