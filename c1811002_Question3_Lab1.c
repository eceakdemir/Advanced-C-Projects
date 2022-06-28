//LAB WORK 1
//ECE AKDEMÝR
//QUESTION 3

#include <stdio.h>
int listInterval(int a, int b, int c)
{
int m,x,s=0,i,res=0;
x=a/c;
if(a%c!=0)
	x++;
m=b/c;
for(i=x; i<=m; i++)
{
	s=c*i;
	printf("%d ",s);
	res++;
}
return res;
}

int main(void)
{
int a,b,c,count=0,res;
while(count<3)
{
	printf("Enter 3 integers :");
	scanf("%d%d%d",&a,&b,&c);
	res= listInterval(a,b,c);
	printf("\nResult= %d\n",res);
	count++;
}
return 0;
}

