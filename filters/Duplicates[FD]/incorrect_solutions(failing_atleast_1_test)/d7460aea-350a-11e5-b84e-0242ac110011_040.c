/*compile-errors:e160_280495.c:26:13: warning: variable 'g' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
    for(j=0;j<N;j=j+1)
            ^~~
e160_280495.c:47:13: note: uninitialized use occurs here
        if (g==0)
            ^
e160_280495.c:26:13: note: remove the condition if it is always true
    for(j=0;j<N;j=j+1)
            ^~~
e160_280495.c:19:12: note: initialize the variable 'g' to silence this warning
    int i,g;
           ^
            = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int N;//no. of terms in array
/*function to test duplicate terms*/

int dupli_tester(int p,int q)
        {if (p==q)
            return 1;
        else 
            return 0;
        }
    
int main() 
{
    scanf("%d\n",&N);//no of terms in array
    int a[N];//array containing 'N' terms
    
    /*inputing the terms in array*/
    int i,g;
    for(i=0;i<N;i=i+1)
        {
            scanf("%d ",&a[i]);
        }
/*checking weather any terms ProblemProblemare same*/
    int j;
    for(j=0;j<N;j=j+1)
        { int e,y,result;
          e=a[j];
          for(y=j+1;y<=N;y=y+1)
            {
               result=dupli_tester(a[j],a[y]);
               if (result==0)
                {
                    g=0;
                    continue;
                }
               
               if (result==1)
                {
                    printf("YES");
                    g=1;
                    break;
                }
            }break;
            
        }
        if (g==0)
            {
            printf("NO");
            }
	return 0;
}
