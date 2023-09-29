/*compile-errors:e158_278308.c:13:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
      if(a=2)
         ~^~
e158_278308.c:13:11: note: place parentheses around the assignment to silence this warning
      if(a=2)
          ^
         (  )
e158_278308.c:13:11: note: use '==' to turn this assignment into an equality comparison
      if(a=2)
          ^
          ==
e158_278308.c:8:24: warning: for loop has empty body [-Wempty-body]
      for(i=1;i<=n;i++);
                       ^
e158_278308.c:8:24: note: put the semicolon on a separate line to silence this warning
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int n)
{
      int i,a;
      a=0;
      for(i=1;i<=n;i++);
{
        if(n%i==0)
        a++;
}
      if(a=2)
      return 1;
      return 0;
}
int main(){
    int b,x;
    scanf("%d",&x);
    
       for(b=x;b>=x;++b)
       if(check_prime (b))
                   break;
    printf("%d\n",b);
    
     return 0;
}