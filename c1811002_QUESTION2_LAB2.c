//LAB WORK 2
//QUESTION 2
//ZEHRA ECE AKDEMÝR

#include<stdio.h>
void countMultiples (int a, int b, int *c);
int main(void)
{
int a,b,count=0,d=0;
int *c;
c=&d;
while(count<2)
{
	printf("Enter upper limit:");
	scanf("%d",&a);
	printf("Enter divisor:");
	scanf("%d",&b);
	countMultiples(a,b,&d);
	printf("%d integers can be divided by %d between 0 and %d.\n",*c,b,a);
	count++;
	*c=0;
}
return 0;
}
void countMultiples (int a, int b, int *c)
{
int x=0;
while(x<a)
{
	if(x%b==0)
		*c=*c+1;
	x++;
}
}

