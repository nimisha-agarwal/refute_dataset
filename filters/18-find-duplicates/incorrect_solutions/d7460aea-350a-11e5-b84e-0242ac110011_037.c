/*compile-errors:e160_280495.c:15:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
e160_280495.c:40:20: warning: variable 'g' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
               if (result==1)
                   ^~~~~~~~~
e160_280495.c:47:17: note: uninitialized use occurs here
            if (g==0)
                ^
e160_280495.c:40:16: note: remove the 'if' if its condition is always true
               if (result==1)
               ^~~~~~~~~~~~~~
e160_280495.c:32:21: warning: variable 'g' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
          for(y=j+1;y<N;y=y+1)
                    ^~~
e160_280495.c:47:17: note: uninitialized use occurs here
            if (g==0)
                ^
e160_280495.c:32:21: note: remove the condition if it is always true
          for(y=j+1;y<N;y=y+1)
                    ^~~
e160_280495.c:30:20: note: initialize the variable 'g' to silence this warning
        { int e,y,g,result;
                   ^
                    = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int N;//no. of terms in array
/*function to test duplicate terms*/

int dupli_chain_tester(int a,int b)
    {
    int k;
    for(k=b;k<N;k=k+1)
        {if (k==a)
            return 1;
        else 
            return 0;
        }
    }
    
int main() 
{
    scanf("%d\n",&N);//no of terms in array
    int a[N];//array containing 'N' terms
    /*inputing the terms in array*/
    int i;
    for(i=0;i<N;i=i+1)
        {
            scanf("%d ",&a[i]);
        }
/*checking weather any terms are same*/
    int j;
    for(j=0;j<N;j=j+1)
        { int e,y,g,result;
          e=a[j];
          for(y=j+1;y<N;y=y+1)
            {
               result=dupli_chain_tester(a[j],a[y]);
               if (result!=0)
                {continue;
                    g=0;
                }
               
               if (result==1)
                {   g=1;
                    printf("YES");
                    break;
                }
            break;
            }
            if (g==0)
            {
            printf("NO");
            }
            
        }
	return 0;
}