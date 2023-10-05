/*compile-errors:e156_271840.c:9:9: warning: operator '>>' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
     ((a+b>>c)||(b+c>>a)||(c+a>>b)) 
       ~^~~~
e156_271840.c:9:9: note: place parentheses around the '+' expression to silence this warning
     ((a+b>>c)||(b+c>>a)||(c+a>>b)) 
        ^
       (  )
e156_271840.c:9:19: warning: operator '>>' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
     ((a+b>>c)||(b+c>>a)||(c+a>>b)) 
                 ~^~~~
e156_271840.c:9:19: note: place parentheses around the '+' expression to silence this warning
     ((a+b>>c)||(b+c>>a)||(c+a>>b)) 
                  ^
                 (  )
e156_271840.c:9:29: warning: operator '>>' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
     ((a+b>>c)||(b+c>>a)||(c+a>>b)) 
                           ~^~~~
e156_271840.c:9:29: note: place parentheses around the '+' expression to silence this warning
     ((a+b>>c)||(b+c>>a)||(c+a>>b)) 
                            ^
                           (  )
e156_271840.c:19:14: warning: operator '<<' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
        ((a*a+b*b<<c*c)||(b*b+c*c<<a*a)||(c*c+b*b<<a*a))
          ~~~^~~~~~
e156_271840.c:19:14: note: place parentheses around the '+' expression to silence this warning
        ((a*a+b*b<<c*c)||(b*b+c*c<<a*a)||(c*c+b*b<<a*a))
             ^
          (      )
e156_271840.c:19:30: warning: operator '<<' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
        ((a*a+b*b<<c*c)||(b*b+c*c<<a*a)||(c*c+b*b<<a*a))
                          ~~~^~~~~~
e156_271840.c:19:30: note: place parentheses around the '+' expression to silence this warning
        ((a*a+b*b<<c*c)||(b*b+c*c<<a*a)||(c*c+b*b<<a*a))
                             ^
                          (      )
e156_271840.c:19:46: warning: operator '<<' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
        ((a*a+b*b<<c*c)||(b*b+c*c<<a*a)||(c*c+b*b<<a*a))
                                          ~~~^~~~~~
e156_271840.c:19:46: note: place parentheses around the '+' expression to silence this warning
        ((a*a+b*b<<c*c)||(b*b+c*c<<a*a)||(c*c+b*b<<a*a))
                                             ^
                                          (      )
e156_271840.c:25:14: warning: operator '>>' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
        ((a*a+b*b>>c*c)||(b*b+c*c>>a*a)||(c*c+a*a>>b*b))
          ~~~^~~~~~
e156_271840.c:25:14: note: place parentheses around the '+' expression to silence this warning
        ((a*a+b*b>>c*c)||(b*b+c*c>>a*a)||(c*c+a*a>>b*b))
             ^
          (      )
e156_271840.c:25:30: warning: operator '>>' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
        ((a*a+b*b>>c*c)||(b*b+c*c>>a*a)||(c*c+a*a>>b*b))
                          ~~~^~~~~~
e156_271840.c:25:30: note: place parentheses around the '+' expression to silence this warning
        ((a*a+b*b>>c*c)||(b*b+c*c>>a*a)||(c*c+a*a>>b*b))
                             ^
                          (      )
e156_271840.c:25:46: warning: operator '>>' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
        ((a*a+b*b>>c*c)||(b*b+c*c>>a*a)||(c*c+a*a>>b*b))
                                          ~~~^~~~~~
e156_271840.c:25:46: note: place parentheses around the '+' expression to silence this warning
        ((a*a+b*b>>c*c)||(b*b+c*c>>a*a)||(c*c+a*a>>b*b))
                                             ^
                                          (      )
9 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
     int a,b,c;
     scanf("%d %d %d",&a,&b,&c);
     
     if
     ((a+b>>c)||(b+c>>a)||(c+a>>b)) 
     {
     
        if
        ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
        {
                 printf("Right Triangle");
        }
        
        else if 
        ((a*a+b*b<<c*c)||(b*b+c*c<<a*a)||(c*c+b*b<<a*a))
        {
                 printf("Acute Triangle");
        }
        
        else if
        ((a*a+b*b>>c*c)||(b*b+c*c>>a*a)||(c*c+a*a>>b*b))
        {
                 printf("Obtuse Triangle");
        }
     }
     
     else {
         printf("Invalid Triangle");
     }
     
     // Fill this area with your code.
    return 0;
}