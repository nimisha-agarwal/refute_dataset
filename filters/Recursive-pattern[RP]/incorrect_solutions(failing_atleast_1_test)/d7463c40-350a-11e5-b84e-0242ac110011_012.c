/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void res(int a)
{
    /*static int count=0;
    if (count==0)
    {
      printf("%d ",a);
      count++;
    }*/
    //else
    //{
        if(a!=n)
        {
            printf("%d ",a);
            if (a>0)
            {
              res(a-5);
            }
            else
            res(a+5);
        } 
        else
        {
            printf("%d",a);
            return;
        }
    //}    
}
int main(){
    scanf("%d",&n);
    printf("%d",n);
    res(n-5);
	return 0;
}