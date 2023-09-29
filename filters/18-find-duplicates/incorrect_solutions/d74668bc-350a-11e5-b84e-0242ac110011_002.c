/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void read(int t[],int size)
//defining a function which reads into array
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d ",&t[i]);
        
    }
    return;
}

int dupli(int t[], int size)
//defining a function which checks for duplicates
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(t[i]==t[j])
            {
                return 1;
                break;
            }
        }
        
    }
    return 0;
}

int main() //main function
{
    int s[50],size; //declaring a character array and size which will be input from the user
	scanf("%d",&size); //accepting size
	read(s,size);      //calling read into function
	if(dupli(s,size))  //checking for duplicates
	    printf("YES\n");
	else
	    printf("NO\n");
	return 0;
}