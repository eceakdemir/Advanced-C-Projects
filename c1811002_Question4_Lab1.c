//LAB WORK 1
//ECE AKDEMÝR
//QUESTION 4

#include <stdio.h>
int digitCount(int a, int b)
{
	int res=0,x,m;
	x=a;
	while(x>0)
	{
			m=x%10;
			if(m==b)
				res++;
			x=x/10;
	}
	return res;
}

int main(void)
{
int a,b,count=0,res;
while(count<5)
{
	printf("Enter two integers:");
	scanf("%d%d",&a,&b);
	res=digitCount(a,b);
	printf("result= %d\n",res);
	count++;
}
return 0;
}
