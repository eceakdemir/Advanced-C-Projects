//LAB WORK 1
//ECE AKDEMÝR
//QUESTION 1

#include <stdio.h>
void ifDivides(int a, int b)
{
	if (a%b==0)
		printf("%d can evenly divide %d.\n",b,a);
	else
		printf("%d can not evenly divide %d.\n",b,a);
}

int main(void)
{
int a, b,count=0;
while(count<5)
{
	printf("Enter two integers:");
	scanf("%d%d",&a,&b);
	ifDivides(a,b);
	count++;
}
return 0;
}

