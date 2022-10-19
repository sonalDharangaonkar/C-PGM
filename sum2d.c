#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j,s=0,s1=0;

	printf("\n Enter row and column size:");
	scanf("%d %d",&r,&c);

//accept elements from user

	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n Enter elements at a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
//display elements in matrix form
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}

//sum of diagonal elements & non diagonal elements

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
				s=s+a[i][j];

			else
				s1=s1+a[i][j];

		}
	}

	printf("\n Sum of diagonal elements=%d",s);
	printf("\n Sum of non-diagonal elements=%d",s1);
	return 0;
}

}