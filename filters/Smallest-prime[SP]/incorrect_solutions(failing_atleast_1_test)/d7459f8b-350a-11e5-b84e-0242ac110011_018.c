/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int num){
    int a,flag=0;
    if(num!=1)
    {
        
    for(;;)
    {
        for(a=2;a<num;a++)
        {
            if((num%a)==0)
            {
                flag=1;
                num++;
                
            }
            else
            {
                flag=0;
            }
            
        }
        if(flag==0)
        {
            return num;
        }
        
    }
    }
    else
    {
        return 2;
    }
}

int main(){
    
    int num,p;
    scanf("%d",&num);
    p=check_prime(num);
    printf("%d",p);
    
    return 0;
}