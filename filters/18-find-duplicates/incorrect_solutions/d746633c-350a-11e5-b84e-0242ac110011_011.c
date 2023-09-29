/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
int s,l,j,i,t;
int f=0; //assining ariable with intial value 0 
scanf("%d",&t);// taking size input of array
int A[t];// assining array 
for(l=0;l<t;l=l+1){// loop for taking input of array elements
    scanf("%d",&s);
    A[l]=s;
}
for (i=0;i<t;i=i+1){// loops for cheking is there any duplicate entry in array
    for(j=0;j<t;j=j+1){
        if(i!=j&&A[i]==A[j]){
            printf("YES");
            f=1;// giving command to break the loop
            break;
        }if(f==1){
            break;
        }
    }
    
}
if(i==t&&j==t){// giving command to print no is there in "no" break
    printf("NO");
}

	// Fill this area with code
	return 0;
}