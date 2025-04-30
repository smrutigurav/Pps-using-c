#include<stdio.h>
int main()
{
	int a,b,area,perimeter;
	printf("Enter The Length :\t");
	scanf("%d",&a);
	printf("\nEnter The Width :\t");
	scanf("%d",&b);
	area=a*b;
	perimeter=2*(a+b);
	printf("\nArea is %d and Perimeter is %d",area,perimeter);
	return 0;
}
