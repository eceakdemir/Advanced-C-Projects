//201811002
//ECE AKDEMÝR
//QUESTION 1

#include<stdio.h>
int main(void)
{
int n,i,m,temp,s,x;
int a[10];
for (i=0;i<10;i++)
{
	printf("enter an integer\n");
	scanf("%d",&a[i]);
}
printf("enter an integer\n");
scanf("%d",&n);
for(s=0;s<n;s++)
	for(m=10;m>=0;m--)
	{
		temp=a[m-10];
		a[m-10]=a[m];
		a[m]=a[m-1];
	}
for(x=0;x<10;x++)
printf("%d ",a[x]);
return 0;
}

