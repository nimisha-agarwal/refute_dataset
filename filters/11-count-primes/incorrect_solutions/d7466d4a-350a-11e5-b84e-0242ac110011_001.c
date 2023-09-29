/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   int count=0;
    int i,j;
    for(i=1;i<=num;i++)
    {  
        if((i%2!=0)&&(i%3!=0)&&(i%5!=0)&&(i%7!=0))
        {   
            j=i+2;
            if((j<=num)&&(j%2!=0)&&(j%3!=0)&&(j%5!=0)&&(j%7!=0))
            {   
                count=count+1;
            }
        }
    }
    return count;
}    


int main(){
    int num;
    
    scanf("%d",&num);
    int a = check_prime(num);
    printf("%d",a);
    return 0;
}