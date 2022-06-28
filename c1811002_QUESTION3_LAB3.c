//LAB WORK 2
//QUESTION 3
//ZEHRA ECE AKDEMÝR


#include<stdio.h>
void multiplesOf (int a, int *b, int *c, int *d);
int main(void)
{
int a,count=0,x,y,z;
int *b,*c,*d;
b=&x;
c=&y;
d=&z;
while(count<2)
{
	printf("Enter integer:");
	scanf("%d",&a);
	multiplesOf(a,&x,&y,&z);
	printf("Multiples of %d are %d %d %d\n",a,*b,*c,*d);
	count++;
}
return 0;
}
void multiplesOf (int a, int *b, int *c, int *d)
{
	*b=a*2;
	*c=a*3;
	*d=a*4;
}

