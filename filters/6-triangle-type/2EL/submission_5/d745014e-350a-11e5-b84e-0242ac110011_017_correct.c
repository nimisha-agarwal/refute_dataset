/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    //Using while loop to arrange the triangles in ascending order
    while(!((a<=b)&&(b<=c)))//loop will run till sides are in order
    {
        if(b<a)
        {
            //interchanging a&b using temp variable
            temp=a;
            a=b;
            b=temp;
        }
        if(c<b)
        {
            //interchanging b&c using temp variable
            temp=b;
            b=c;
            c=temp;
        }
    }
    if((a+b)<=c)//Condition for invalid triangle
      printf("Invalid Triangle");
    else
    {
        if((a*a+b*b)>(c*c))//Condition for acute triangle
          printf("Acute Triangle");
        else if((a*a+b*b)==(c*c))//Condition for right triangle
          printf("Right Triangle");
        else//if not acute or right triangle is obtuse
          printf("Obtuse Triangle");
    }
    return 0;
}