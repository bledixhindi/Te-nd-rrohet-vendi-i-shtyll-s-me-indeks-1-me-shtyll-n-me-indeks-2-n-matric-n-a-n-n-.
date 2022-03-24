#include <stdio.h>
int main()
{
	int m,n,i,j,temp;
	printf("Shkruani permasat e matrices (m,n):\n");
	scanf("%d %d",&m,&n);

	int a[m][n];
	printf("\nShkruani elementet e matrices:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nShkruani vleren qe do te ruhet ne qelizen a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Vlerat e ruajtura ne matrices se vjeter:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			temp=a[i][1];
			a[i][1]=a[i][2];
			a[i][2]=temp;
		}
		printf("\n");
	}

	printf("Vlerat e ruajtura ne matrices se re:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
