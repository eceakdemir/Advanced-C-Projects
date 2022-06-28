
//201811002
//ECE AKDEMÝR
//QUESTION 2

#include<stdio.h>
int main(void)
{
int n,i,s,d,temp,count=0;
int a[30];
printf("Enter an integer n (n<30):");
scanf("%d",&n);
for(i=0;i<n;++i)
{
	printf("enter an integer:");
	scanf("%d",&a[i]);
}
for(s=0;s<n;s++)
{
	temp=a[s];
	for(d=0;d<n;d++)
	{
		if(temp==a[d])
			count++;
	}
	printf("%d occurs %d times\n",temp,count);
	count=0;
}
return 0;
}
