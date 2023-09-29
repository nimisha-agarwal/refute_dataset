/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    for(int i=2;i<(num/2);i++)
    {
        if(num%i==0)
        {
            return 1;
        }
     
    }
 return num;
}

int main(){
    int num,p,p1,prime;
    scanf("%d",&num);
    p=check_prime(num);
    if(p==1)
    {
        for(int i=num+1;i<(num+10);i++)
            {
                p1= check_prime(i);
                if(p1==1)
                    {
                        continue; 
                    }    
                else{
                        prime=i;
                        printf("%d",i);
                        break;
                    }
           
            }
    }
    else
     {int p2=check_prime(num);
    printf("%d",p2);     
         
     }
    

}