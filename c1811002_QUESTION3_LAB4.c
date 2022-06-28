//201811002
//ECE AKDEMÝR
//QUESTION 3

#include<stdio.h>
int main(void)
{
int A[50];
int i,s,add=0;
for(i=0;i<50;i++)
{
	add=add+i;
	A[i]=add;
}
for(s=0;s<50;++s)
{
	printf("A[%d]=%d\n",s,A[s]);
}
return 0;
}
