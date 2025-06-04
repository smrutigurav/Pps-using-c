#include<stdio.h>
int main()
{
	int a[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
	int b[3][3]={ {9,8,7},{6,5,4},{3,2,1} };
	int i,j,C[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=a[i][j]+b[i][j];
			printf("%d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
