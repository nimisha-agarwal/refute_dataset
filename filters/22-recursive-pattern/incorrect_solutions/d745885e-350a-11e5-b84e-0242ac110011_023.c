/*compile-errors:e175_306004.c:36:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int pattern(int n, int index,int array[])
{
  if(index==0)
  {
      array[index]=0;
      pattern(n,index+1,array);
  }
  else
  {
      if(array[index-1]>0)
      {
          array[index] = array[index-1]-5;
          pattern(n,index+1,array);
      }
      else if(array[index-1]<=0)
      {
          array[index] =array[index-1]+5;
          {
           if(array[index]!=n)
           {
               pattern(n,index+1,array);
           }
           else
           {
               for(int i=0;i<=index;i++)
               {
                   printf("%d ",array[i]);
               }
           }
          }
      }
  }

}



int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    pattern(n,0,array);

    
    
	return 0;
}