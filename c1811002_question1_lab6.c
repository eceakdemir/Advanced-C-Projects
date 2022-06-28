//ECE AKDEMÝR
//201811002
//LAB 6 QUESTION 1

#include <stdio.h>
#include <stdlib.h>
void findFrequency(int x[],int n);
void findmode(int b[],int m);
int main (void)
{
int a[100];
int i;
for(i=0;i<100;i++)
	a[i]=rand() %10+1;
findFrequency(a,100);
return 0;
}

void findFrequency(int x[],int n)
{
	int b[10]={0,0,0,0,0,0,0,0,0,0};
int i,j;
for(i=1;i<11;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==x[j])
			b[i-1]=b[i-1]+1;
	}
}
printf("SCORE  FREQUENCY\n");
for(i=1;i<11;i++)
	printf("%d      %d\n",i,b[i-1]);
printf("HISTROGRAM\n");
for(i=0;i<10;i++)
{
	for(j=0;j<b[i];j++)
		printf("*");
printf("\n");
}
findmode(b,10);
}

void findmode(int b[],int m)
{
int i,big,keep;
big=b[0];
for(i=0;i<m;i++)
{
	if(big<b[i])
	{
		big=b[i];
		keep=i+1;
	}
}
printf("\nMode value is %d. It occured %d times.",keep,big);
}
