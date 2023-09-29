/*compile-errors:e158_278074.c:15:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime (int num)     /*fuction definition*/
{ int p1,p2,i,c=0;
  for(i=2;i<num;i++)
  { if(i%2!=0)                 /*checking whether number is prime...*/
    { p1=i;
      p2=p1+2;
      if(p1<=num && p2<=num)
        { c++;
        }
    }
  }
printf("%d",c);                /*printing twin primes*/
}
//}Complete function definitions

int main()
{
    
    int num;                    /*feeding the value*/
    scanf("%d",&num);
    check_prime(num);           /*function call*/
    return 0;
}