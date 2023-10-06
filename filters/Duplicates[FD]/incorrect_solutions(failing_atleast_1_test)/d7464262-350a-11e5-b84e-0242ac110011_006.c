/*compile-errors:e160_280508.c:29:8: warning: unused variable 'j' [-Wunused-variable]
        int i,j,n,y=1;
              ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void fill(int arr[], int n)
{
    
    for(int i=0; i<n;++i)
    scanf("%d", &arr[i]);
    
}

int check(int arr[], int n, int k)//function to check if the element at index k repeats after it
{
    
    int i;
    for(i=k+1;i<n;++i)// we don't need to traverse the whole array         again because we have already checked if the numbers stored in         indexes below k have a duplicate or not
    {
        if(arr[i]==arr[k])//checks if two elements are equal
        {
            printf("YES\n");
            return 0;
        }
    }
    return 1;
    
}

int main() {
    
	int i,j,n,y=1;
	scanf("%d\n", &n);
	int arr[n];
	fill(arr,n);// to fill the array with elements
	for(i=0;i<n-1;++i)//no need to go to last element because nothing      to compare with for last element
	{
	    y= check(arr,n,i);
	    if(y==0)break;//if y gets value zero then at least one element         is duplicate, hence we terminate the loop as there is no need          of further iteration.
	}
	if(y)printf("NO\n");//if y still has 1, it means no duplicate
	return 0;
	
}