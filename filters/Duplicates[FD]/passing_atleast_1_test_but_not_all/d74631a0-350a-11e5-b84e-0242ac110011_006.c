/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int duplicate (int arr[], int len)
{
    int i,j,flag=0;
    for (i=0;i<len;i++)
    {
        for (j=0;i<len;j++)
        {
            if (i==j)
            continue;
            if (arr[j]==arr[i])
            {
                flag=1;
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