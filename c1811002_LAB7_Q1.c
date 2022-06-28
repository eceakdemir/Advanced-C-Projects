//ECE AKDEMÝR
//201811002
//LAB 7 QUESTION 1

#include<stdio.h>
int main(void)
{
int a[2][3],b[2][3];
int i,j,m,n,loc,count=0;
printf("Enter array 1:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("Element %d,%d:",i,j);
		scanf("%d",&a[i][j]);
	}
}
printf("Enter array 2:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("Element %d,%d:",i,j);
		scanf("%d",&b[i][j]);
	}
}
printf("Array 1:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
	printf("\n");
}
printf("Array 2:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
		printf("%d ",b[i][j]);
	printf("\n");
}
while(flag!=1)
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			count++;
			if(a[i][j]!=b[i][j])
			{
				loc=count;
				m=i;
				n=j;
				flag=1;
			}
		}
	}
}
printf("\nArrays differ at element %d at locations %d,%d\n",loc,m,n);
return 0;
}

