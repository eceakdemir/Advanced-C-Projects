//ECE AKDEMÝR
//201811002
//LAB 12 QUESTION 4

#include<stdio.h>
#include<string.h>
struct team
{
	char name;
	int rank;
	int won;
	int budget;
};
int main(void)
{
	struct team a[9];
	int i,b,r,keep;
	for(i=0;i<10;i++)
	{
		printf("Input name of team %d:",i+1);
		scanf("%s",&a[i].name);
		printf("Input rank, number of matches won and budget of team %d:",i+1);
		scanf("%d %d %d",&a[i].rank,&a[i].won,&a[i].budget);

	}
	r=a[0].rank;
	b=a[0].budget;
	for(i=0;i<10;i++)
	{
		if(r<a[i].rank && b>a[i].budget)
		{
			r=a[i].rank;
			b=a[i].budget;
			keep=i;
		}
	}
	printf("\nThe most efficient team is %c\n",a[keep].name);
	return 0;
}
