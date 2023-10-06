/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
//function checkDup to check duplicate elements in array.
void checkDup(int n[],int l)
{
    int b,c,check=1;
    for(b=0;b<l-1;b++)
    {
        for(c=b+1;c<l;c++)
        {
            if (n[c]==n[b])
            check=0;
            break;
        }
    }
    printf((check==1)?"NO":"YES");
    return;
}
int main() {
	// Fill this area with your code.
	int N;
	scanf("%d",&N);
	if (N>=50) return 0;
	int ar[N],a;
	for(a=0;a<N;a++)
	  scanf("%d ",&ar[a]);
	checkDup(ar,N);
	return 0;
}