/*execute-result:OK*/
/*compile-errors:e160_280448.c:22:27: warning: expression result unused [-Wunused-value]
            for(int count=0;count<n,count!=i;count++){
                            ~~~~~^~
e160_280448.c:23:13: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
            if(a[i]=a[count]){printf("YES\n");break;}
               ~~~~^~~~~~~~~
e160_280448.c:23:13: note: place parentheses around the assignment to silence this warning
            if(a[i]=a[count]){printf("YES\n");break;}
                   ^
               (            )
e160_280448.c:23:13: note: use '==' to turn this assignment into an equality comparison
            if(a[i]=a[count]){printf("YES\n");break;}
                   ^
                   ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int duplicate(int num,int a[n]){
    
    int duplicate=0;
    for(int count=0;count<n;count++){
        if(num==a[count]){duplicate++;}
        else continue;
    }
    
    if (duplicate==1){return 1;}
    else{return 0;}
}
int main() {
    int n;
    scanf("%d\n",&n);
	int a[n];
	for(int i=0;i<n;i++){
	    scanf("%d ",&a[i]);
	}
	for (int i=0;i<n;i++){
	    for(int count=0;count<n,count!=i;count++){
	    if(a[i]=a[count]){printf("YES\n");break;}
	}

	    
	}
	
	
	    
	return 0;

}