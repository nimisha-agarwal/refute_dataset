/*execute-result:OK*/
/*compile-errors:e160_280449.c:10:13: warning: variable 'z' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
    for(x=0;x<n-1;x++)                     
            ^~~~~
e160_280449.c:28:8: note: uninitialized use occurs here
    if(z==1)
       ^
e160_280449.c:10:13: note: remove the condition if it is always true
    for(x=0;x<n-1;x++)                     
            ^~~~~
e160_280449.c:7:18: note: initialize the variable 'z' to silence this warning
    int x,y,p,q,z;                       
                 ^
                  = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int element_equal(int a[],int n);

int element_equal(int a[],int n)       
{                                        
    int x,y,p,q,z;                       
    x=0;                                 
    y=0;                                 
    for(x=0;x<n-1;x++)                     
    {                                    
        p=a[x];                                 
        for(y=x+1;y<n;y++)               
        {                                
            q=a[y];                      
            if(p==q)                     
            {                            
                z=1;                     
                break;                   
            }
            else
            {
                z=0;
            }
        }
        break;
    }
    if(z==1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
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