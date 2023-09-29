/*compile-errors:e158_278315.c:10:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e158_278315.c:16:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
for(a=N;a=N;a=a+1)
        ~^~
e158_278315.c:16:10: note: place parentheses around the assignment to silence this warning
for(a=N;a=N;a=a+1)
         ^
        (  )
e158_278315.c:16:10: note: use '==' to turn this assignment into an equality comparison
for(a=N;a=N;a=a+1)
         ^
         ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int i;
int check_prime(int num){
    for(i=2;i<=num-1;i=i+1)
    {if(num%i!=0)
    {printf("%d",num);}
        else
        continue;
    }
}

int main()
{
    int N,a;
scanf("%d",&N);
for(a=N;a=N;a=a+1)
{if (check_prime(a))
break;}

    
    return 0;
}