/*compile-errors:e160_280536.c:13:6: warning: inequality comparison result unused [-Wunused-comparison]
    j!=i;
    ~^~~
e160_280536.c:13:6: note: use '|=' to turn this inequality comparison into an or-assignment
    j!=i;
     ^~
     |=
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int no[50],i,j;
    for(i=0;i<=49;i++)
{   
    scanf("%d",&no[i]);
}  
    for (i=0;i<=49;i++)
{
    for(j=0;j<=49;j++)
{
    j!=i;
    if(no[i]==no[j])
    printf("YES");
    else
    printf("NO");
}
}
	return 0;
}