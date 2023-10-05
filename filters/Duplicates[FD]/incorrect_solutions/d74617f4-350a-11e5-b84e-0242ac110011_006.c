/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void array_Inp(int ar[],int l)
{
    for(int i=0;i<l;i++)
    {
        scanf("%d",&ar[i]);
    }
}

int main() 
{
    int ar[50];        //array of max length as per constraints
    int N,i,j;
    int f=0;
    scanf("%d\n",&N);
    array_Inp(ar,N);    //function to input array
    for(i=0;i<N;i++)    // checking using nested loop.
    {
        for(j=i+1;j<N;j++)
        {
            if(ar[i]==ar[j])
            {
                f=1;       // flag
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
	if(f==1)
	{
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}
	return 0;
}