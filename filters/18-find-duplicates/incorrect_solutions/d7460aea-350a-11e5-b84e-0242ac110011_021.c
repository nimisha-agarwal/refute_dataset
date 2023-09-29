/*execute-result:OK*/
/*compile-errors:e160_280495.c:15:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
1 warning generated.*/
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
        { int e,y,result;
          e=a[j];
          for(y=j+1;y<N;y=y+1)
            {
               result=dupli_chain_tester(a[j],a[y]);
               if (result==1)
                {
                    printf("YES");
                    break;
                }
               else
               continue;
            }
            if (result!=1)
            {printf("NO");}
        }
	return 0;
}