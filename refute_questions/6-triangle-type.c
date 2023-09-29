
//source: refute_dataset/c_data/6-triangle-type/fft_intersect_2eb/d745014e-350a-11e5-b84e-0242ac110011_004.c
// Edits from the original: changed spacings, indentation and added some comments to make the code readable.

#include<stdio.h>
int main() {
	// a, b, c are the sides of the triangle
	int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);

	// renaming the sides so that 'c' denotes the largest side
    while(!((a<=b)&&(b<=c)))
    {
        if(b<a)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(c<b)
        {
            temp=b;
            b=c;
            c=temp;
        }
    }
    if((a+b)<c) // checking if the given sides constitute a valid triangle
      printf("Invalid Triangle");
    else
    {
        if((a*a+b*b)>(c*c))
          printf("Acute Triangle");
        else if((a*a+b*b)==(c*c))
          printf("Right Triangle");
        else
          printf("Obtuse Triangle");
    }
    return 0;
   }

   