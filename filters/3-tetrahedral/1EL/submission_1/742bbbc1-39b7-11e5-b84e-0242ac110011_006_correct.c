/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int p;  //  declaration of input p
    int n=0; // "n" is  cummulative sum of each tetrahedral number                                                      after every iteration
    int m;  // "m" denotes the  sum of first i natural numbers
    scanf("%d", &p);  // storing the input in memory's adress
    for(int i=1;i<=p;i=i+1) // using for loop 
    {
        m = (i*(i+1))/2;      // expression for "m"
        n = n+m;              // incrementing n i.e. cummulative sum
    }
	printf("%d", n);         // printing sum
	return 0;
}