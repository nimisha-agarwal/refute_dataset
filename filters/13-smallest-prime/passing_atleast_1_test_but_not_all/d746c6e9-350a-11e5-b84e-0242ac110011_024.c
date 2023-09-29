/*execute-result:OK*/
/*compile-errors:e158_278362.c:21:19: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
        else if (c=2)
                 ~^~
e158_278362.c:21:19: note: place parentheses around the assignment to silence this warning
        else if (c=2)
                  ^
                 (  )
e158_278362.c:21:19: note: use '==' to turn this assignment into an equality comparison
        else if (c=2)
                  ^
                  ==
e158_278362.c:35:21: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
         scanf("%d",n);
                ~~  ^
e158_278362.c:35:21: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
         scanf("%d",n);
                    ^
e158_278362.c:34:15: note: initialize the variable 'n' to silence this warning
         int n,m;
              ^
               = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int checkprime(int n)
  {
      int j,k,c;
      
      
     for(j=n;j>=n;j++)
    { c=0;
       for(k=2;k<=j;k++)
          {
            if(j%k==0)
           { c=c+1;
           }
           
          }
        if(c>2)
        {
            continue;
        }
        else if (c=2)
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