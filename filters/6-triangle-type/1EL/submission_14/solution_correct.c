#include <stdio.h>

int main() {

	int a ,b , c , t;
	scanf("%d%d%d" , &a , &b , &c); 

	if (a > c)  //swap a & c
	{	t = c;
		c = a;
		a = t;
	}

	if (b > c)  //swap b & c
	{
		t = c;
		c = b;
		b = t;
	}
	// now c is the longest side

	if ( a + b <= c || b + c <= a || a + c <= b)
		printf("Invalid Triangle");

	else if (c*c > a*a + b*b)
		printf("Obtuse Triangle");

	else if (c*c < a*a + b*b)
		printf("Acute Triangle");

	else
		printf("Right Triangle");

	
	return 0;
}