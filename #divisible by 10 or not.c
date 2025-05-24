#include<stdio.h>
int main()
{
	int num,rem;
	printf("Enter the number:\t");
	scanf("%d",&num);
	rem = num%10;
	if(rem==0)
	{
		printf("The enter number %d is EVEN");
	}
	else
	{
		printf("The enter number %d is not divisible by 10",num);
	}
	return 0;
}
