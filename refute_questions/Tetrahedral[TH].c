//source: refute_dataset⁩/c_data⁩/⁨3-tetrahedral⁩/failing_tests⁩/3c529992-3a85-11e5-b84e-0242ac110011_016.c
// T(n) = (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
// Edits: added a comment

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int sum=0,i,s;
	for(i=0;i<n;i++)
	{
	    s=i*(i+1)/2; // sum of first n natural numbers is n*(n+1)/2
		sum=sum+s;
	}
	
	printf("%d",s);
	return 0;
}