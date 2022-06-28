//LAB WORK 1
//ECE AKDEMÝR
//QUESTION 2

#include<stdio.h>
void findPowers(int a)
{
	int b=0,i;
	if(a%2==0)
	{
		for(i=1;i<=a;i++)
			b=b+i*i*i;
		printf("Result = %d\n",b);
	}
	else
	{
		for(i=1;i<=a;i++)
			b=b+i*i;
		printf("Result = %d\n",b);
	}
}

int main(void)
{
int a, count=0;
while(count<3)
{
	printf("Enter an integer :");
	scanf("%d",&a);
	findPowers(a);
	count++;
}
return 0;
}

