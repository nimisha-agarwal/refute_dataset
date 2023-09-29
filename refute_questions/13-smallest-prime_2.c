// source: refute_dataset/c_data/13-smallest-prime/fft_intersect_lis_intersect_2eb/d74593d0-350a-11e5-b84e-0242ac110011_012.c
//Edits: Changed variable names, adjusted spacing and braces, added comments to make the code more readable.

#include<stdio.h>
#include<math.h>
int check_prime(int num)
{
    int c=0;

    if(num==1)
        return 0;
    
    if (num==2||num==3)
        return 1;

    else
    {
        for(int i=2;i<(int)sqrt(num);i++) 
            if(num%i==0)
                c++;

        if(c == 0) 
            return 1;
        
        else
            return 0;
    }
}



int main()
{
    int N,o;
    scanf("%d",&N);
    do
    {
        o=check_prime(N);
        if(o==1)
            printf("%d\n",N);
        else
            N++;    
    }
    while(o!=1);
    return 0;
}