/*execute-result:OK*/
/*compile-errors:e160_280515.c:36:17: warning: unused variable 'i' [-Wunused-variable]
        int s[50],size,i;
                       ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void read(int t[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d ",&t[i]);
        
    }
    return;
}

int dupli(int t[], int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
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


int main() {
	// Fill this area with your code.
	int s[50],size,i;
	scanf("%d",&size);
	read(s,size);
	if(dupli)
	    printf("YES\n");
	else
	    printf("NO\n");
	return 0;
}