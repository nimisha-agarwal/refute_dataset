/*compile-errors:*/
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
          for(y=j+1;y<N;y=y+1)
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
            }
            
        }
        if (g==0)
            {
            printf("NO");
            }
	return 0;
}
