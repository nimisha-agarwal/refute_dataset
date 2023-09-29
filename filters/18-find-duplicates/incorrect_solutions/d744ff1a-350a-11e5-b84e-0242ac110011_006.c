/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void in(int t[],int n)  //function to input elements of array passed
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        
    }
}

int duplicate(int t[],int n) //function to check if the array has 
                             //duplicate elements  
{
    int i;int j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(t[i]==t[j])
            return 1;
        }
    }
    return 0;
}

int main() {
	int a;
    scanf("%d",&a);
    
    int arr[a];

    in(arr,a);
    
    if((duplicate(arr,a))==1)  //if duplicate returns 1 then array                                    //given has duplicate elements
    {
        printf("YES");
        printf("\n");
    }
    else
    {
        printf("NO");
        printf("\n");
        
    }
	return 0;
}