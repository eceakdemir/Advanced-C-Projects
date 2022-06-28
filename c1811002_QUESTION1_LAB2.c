//LAB WORK 2
//QUESTION 1
//ZEHRA ECE AKDEMÝR


#include<stdio.h>
int main(void)
{
int *p;
int x;
printf("Enter an integer less than 100 :");
scanf("%d",&x);
p=&x;
if (x%2==1)
	x++;
printf("Result:");
while(*p<100)
{
	printf(" %d",*p);
	*p+=2;
}
return 0;
}
