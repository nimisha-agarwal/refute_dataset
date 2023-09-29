/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int duplicate (int arr[], int len)
{
    int i,j,flag=1;
    for (i=0;i<len;i++)
    {
        for (j=i;i<len;j++)
        {
            if (arr[j]==arr[i])
            {
                flag=0;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int i,N,boo;
    scanf("%d", &N);
    int A[N];
    for (i=0;i<N;i++)
    scanf("%d", &A[i]);
    boo=duplicate(A,N);
    if (boo==1)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}