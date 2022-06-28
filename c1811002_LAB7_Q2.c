//ECE AKDEMÝR
//201811002
//LAB 7 QUESTION 2

#include<stdlib.h>
#include<stdio.h>
int f(int a[][6],int n,int m,int b[]);
int main(void)
{
int a[50][6];
int b[6];
int n,i,j,count=1,keep;
printf("Enter number of columns n<50:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<6;j++)
	{
		a[i][j]=rand()%49+1;
		printf("%d ",a[i][j]);
	}
    printf("\n");
}
printf("Enter YOUR RESULT:\n");
for(j=0;j<6;j++)
{
	printf("%d. Nummber:",count);
	scanf("%d",&b[j]);
	count++;
}
keep=f(a,n,6,b);
printf("\nThe winning column index is %d\n",keep);
return 0;
}
int f(int a[][6],int n,int m,int b[])
{
int keep,i,j,count=0;
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		if(a[i][j]==b[j])
		{
			count++;
		}
	}
	if(count==6)
	{
		keep=i+1;
		break;
	}
}
return keep;
}
