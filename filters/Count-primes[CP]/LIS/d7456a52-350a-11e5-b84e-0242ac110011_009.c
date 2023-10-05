/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int x,f;
    for(x=2;x<num;x++){
        if(num%x==0)
         {
             f=0;
             break;
         }
         f=1;
         
    }
    printf("%d",f);
 return f;
}


int main(){
    
int y,a,count=0;
scanf("%d",&a);
for(y=2;y<a-2;y++)
    { 
    int c=check_prime (y);
    int d=check_prime (y+2);
    if(c==1&&d==1){count++;}
    }
    printf("%d",count);
    
    return 0;
}