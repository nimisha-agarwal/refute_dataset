/*compile-errors:e158_278327.c:7:7: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if(num=1)
   ~~~^~
e158_278327.c:7:7: note: place parentheses around the assignment to silence this warning
if(num=1)
      ^
   (    )
e158_278327.c:7:7: note: use '==' to turn this assignment into an equality comparison
if(num=1)
      ^
      ==
e158_278327.c:9:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
else if(num=2)
        ~~~^~
e158_278327.c:9:12: note: place parentheses around the assignment to silence this warning
else if(num=2)
           ^
        (    )
e158_278327.c:9:12: note: use '==' to turn this assignment into an equality comparison
else if(num=2)
           ^
           ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)

{ int i;

if(num=1)
return 0;
else if(num=2)
return 1;
else
{for(i=num-1;i<=2;i++)
{
    if(num%i==0)
    return 0;
}
}
return 1;
    
}

int main()
{ 
    int n,x,p;
    int k;
    
    scanf("%d",&n);
    
    for(k=n;k!=0;k++)
    {
       x= check_prime(k);
       if(x==1)
       { p=x;
         k=-1;
       }
        
    }
    
    printf("%d",p);

    
    return 0;
}