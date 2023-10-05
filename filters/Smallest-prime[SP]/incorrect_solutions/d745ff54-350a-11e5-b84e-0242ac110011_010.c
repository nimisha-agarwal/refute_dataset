/*execute-result:OK*/
/*compile-errors:e158_278327.c:24:11: warning: unused variable 'x' [-Wunused-variable]
    int n,x,p;
          ^
e158_278327.c:24:13: warning: unused variable 'p' [-Wunused-variable]
    int n,x,p;
            ^
e158_278327.c:39:29: warning: variable 'k' is uninitialized when used here [-Wuninitialized]
    printf("%d",check_prime(k));
                            ^
e158_278327.c:25:10: note: initialize the variable 'k' to silence this warning
    int k;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)

{ int i;

if(num==1)
return 0;
else if(num==2)
return 1;
else
{for(i=num-1;i<=2;i--)
{
    if(num%i==0)
    return 0;
}

return 1;
}   
}

int main()
{ 
    int n,x,p;
    int k;
    
    scanf("%d",&n);
    
   // for(k=n;k!=0;k++)
   // {
    //   x= check_prime(k);
    //   if(x==1)
     //  { p=k;
      //   k=-1;
     //  }
        
  //  }
    
    printf("%d",check_prime(k));

    
    return 0;
}