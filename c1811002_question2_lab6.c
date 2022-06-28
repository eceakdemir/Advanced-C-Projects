//ECE AKDEMÝR
//201811002
//LAB 6 QUESTION 2

#include <stdio.h>
int isMirrow(int x[5][5],int n,int m);
int main (void)
{
int a[5][5];
int i,j,mirrow=5;
for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		printf("Enter an integer:");
		scanf("%d",&a[i][j]);
	}
}
mirrow=isMirrow(a,5,5);
if(mirrow==1)
	printf("The array is mirrow copy.");
else if (mirrow==0)
	printf("The array is NOT mirrow copy.");
return 0;
}


int isMirrow(int x[5][5],int n,int m)
{
int i,j,flag=1;
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		if(x[i][j]!=x[j][i] && i!=j)
			flag=0;
	}
}

return flag;
	;
}

