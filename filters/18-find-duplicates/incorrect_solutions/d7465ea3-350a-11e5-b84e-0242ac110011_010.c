/*execute-result:OK*/
/*compile-errors:e160_280512.c:5:9: warning: unused variable 'i' [-Wunused-variable]
    int i,j,b,c;
        ^
e160_280512.c:5:11: warning: unused variable 'j' [-Wunused-variable]
    int i,j,b,c;
          ^
e160_280512.c:5:13: warning: unused variable 'b' [-Wunused-variable]
    int i,j,b,c;
            ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int check_duplicate(int a[])
{
    int i,j,b,c;
    c=0;
    /*
    for(i=0;i<n;i++)
    {
        b=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]==b)
            {
                c=c+1;printf("%d",c);
            }
        }
    }*/
     printf("%d",a[4]);   
    if(c>n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
	int a[5]={1,2,3,1,7};
	printf("%d",check_duplicate(a));
	return 0;
}