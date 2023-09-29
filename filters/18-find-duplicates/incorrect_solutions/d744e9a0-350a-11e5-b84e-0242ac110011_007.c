/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int element_equal(int a[],int n);

int element_equal(int a[],int n)
{
    int x,y,p,q;
    x=0;
    y=0;
    for(x=0;x<n;x++)
    {
        p=a[x];
        for(y=0;y<x;y++)
        {
            q=a[y];
            if(p==q)
            {
                printf("YES");
                break;
            }
            else
            {
                printf("NO");
                break;
            }
        }
    }
    return 0;
}

int main()

{
	int a[50],b,n;//Declaring array and variables
	
	scanf("%d",&n);
	 
	 
	 
	                             //``````````````````````//
	for(b=0;b<n;b++)             // Entering values into //
	    {                        // array a[] upto n.    //
	        scanf("%d",&a[b]);   //                      //
	    }                        //______________________//
	    
	 element_equal(a,n);
	 
	    
	    
	    
	    
	    
	return 0;
}