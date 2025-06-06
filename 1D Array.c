#include<stdio.h>
int main()
{
	int marks [5],i,j;
	for(i=0;i<5;i++)
	{
		printf("Enter element %d\t",i);
		scanf("%d",&marks [i]);
	}
	printf("%d",marks[2]);
	for(j=0;j<5;j++)
	{
		printf("%d\n",marks[i]);
	}
	return 0;
}
