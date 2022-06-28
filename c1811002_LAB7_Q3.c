//ECE AKDEMÝR
//201811002
//LAB 7 QUESTION 3

#include<stdio.h>
void change(double b[][3]);
int main(void)
{
double a[3][3];
int i,j,count=1;
printf("Enter your Array:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d. Real Number:",count);
		scanf("%lf",&a[i][j]);
		count++;
	}
}
printf("YOUR ARRAY:\n\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%lf ",a[i][j]);
    printf("\n");
}
change(a);
printf("NEW ARRAY:\n\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%lf ",a[i][j]);
    printf("\n");
}
return 0;
}

void change(double b[][3])
{
 int i,j;
for(j=0;j<3;j++)
{
	b[0][j]=b[0][j]*2;
}
for(j=0;j<3;j++)
{
	b[1][j]=b[1][j]/2;
}
for(j=0;j<3;j++)
{
	b[2][j]=b[2][j]-1;
}
}

