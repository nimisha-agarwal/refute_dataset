/*execute-result:OK*/
/*compile-errors:e158_278074.c:26:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime (int num)     /*fuction definition*/
{ int p1,p2,i,c=0,x=0,m=0;
  for(i=3;i<num;i++)
 { x=0;
 for( int j=1;j<=i;j++)
     { if(i%j==0)
        x++;}
   if(x<=2)
  /*checking whether number is prime...*/
    { p1=i;
      p2=p1+2;
      if(p1<=num && p2<=num)
      {  m=0;
      for(int k=1;k<=p2;k++)
          if(p2%k==0)
            m++;
      }
       if(m<=2)
         c++;
        
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