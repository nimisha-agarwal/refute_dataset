/*compile-errors:e158_278362.c:36:21: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
         scanf("%d",n);
                ~~  ^
e158_278362.c:36:21: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
         scanf("%d",n);
                    ^
e158_278362.c:35:15: note: initialize the variable 'n' to silence this warning
         int n,m;
              ^
               = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int checkprime(int n)
  {
      int j,k,c;
      
      
     for(j=n;j>=n;j++)
    { c=0;
       for(k=2;k<=j-1;k++)
          {
            if(j%k==0)
           { c=c+1;
             if(c>=1)
             {
                 break;
             }
           }
           
          }
        if(c==1)
        {
            break;
        }

        
    }
    return j;
  }       
    
  

int main()
     {
         int n,m;
         scanf("%d",n);
        m= checkprime(n);
         printf("%d",m);
    
    return 0;
}