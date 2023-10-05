/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void read_into_array(int a[],int size)
{
    
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
}
void equality(int b[],int N)
{
    
    int i,j;
    for(i=0; i<N; i++)
    {
        for(j=1;j<N-1;j++)
        {
            if(b[i]==b[j])
            {
              printf("YES");  
            }
            
            else
            {
                continue;
              
            }
              printf("NO");
            
        }
    }
}
int main() {
	int length;
	scanf("%d", &length);
	printf("%d\n", length);
	int s[length];
	read_into_array(s,length);
	equality(s,length);
	return 0;
}