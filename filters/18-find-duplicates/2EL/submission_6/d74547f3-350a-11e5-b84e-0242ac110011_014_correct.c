/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int n,flag=0;
    scanf("%d",&n);
   
    int i,a[n],s;
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
    for(s=0;s<n;s++){
    for(i=s+1;i<n;i++)
    {
        if(a[s]==a[i])
        {
            printf("YES\n");
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
        
    }
    if(flag==1)
    break;
    }
   
   if(flag==0){
       printf("NO");
   }
       
   
	// Fill this area with your code.
	return 0;
}